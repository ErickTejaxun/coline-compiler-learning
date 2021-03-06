#include "editor.h"
#include "ui_editor.h"
#include <iostream> //libreria para imprimir en cosola de C
#include <QString>
#include "nodo.h"
#include <QMessageBox>
#include <qlist.h>
#include <primerRecorrido.h>
#include <qdebug.h>
#include <generadorcodigo.h>
#include <codigo3d.h>
extern int yyparse();
extern nodo *raiz; // Raiz del arbol
extern int linea; // Linea del token
extern int columna; // Columna de los tokens
extern int yylineno;
extern QList<errorT> *listaErrores;// = new QList<errorT>();
QList<nodo> *listaArboles  = new QList<nodo>();
primerRecorrido *recorrido1;
#include "parser.h"
#include "scanner.h"
#include "primerRecorrido.h"
Codigo3d *code;
editor::editor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::editor)
{
    ui->setupUi(this);
}

editor::~editor()
{
    delete ui;
}

void editor::on_botonCompilar_clicked()
{    
    //m_pTableWidget->setRowCount(10);
    //m_pTableWidget->setColumnCount(3);+
    ui->tablaSimbolos->setRowCount(10);
    ui->tablaSimbolos->setColumnCount(8);
    this->listaArboles  = new QList<nodo>();
    listaErrores->empty();
    QString texto;
    texto = ui->txtinput->toPlainText();
    //std::cout << texto.toStdString() << std::endl;
    YY_BUFFER_STATE buffer = yy_scan_string(texto.toUtf8().constData());
    linea =0;
    columna =0;
    yylineno = 0;
    if(yyparse()==0)
    {
        ui->txtConsola->setText("Analisis completado.");
        graficador *graf = new graficador(raiz);
        graf->generarImagen();        
        /*Generamos la tabla de símbolos*/
        recorrido1 = new primerRecorrido();
        this->listaArboles->append(*raiz);
        recorrido1->interpretar(this->listaArboles);
        imprimirTabla();
        code = new Codigo3d();
        /*Generamos código*/
        GeneradorCodigo *generador = new GeneradorCodigo();
        generador->Init();
        ui->txtCodigo3d->setPlainText(code->cadena3d);
    }
    else
    {
        ui->txtConsola->setText("Errores sintacticos en la entrada");
    }
    yy_delete_buffer(buffer);
    imprimirErrores();


}

void editor::on_txtinput_selectionChanged()
{
    QPlainTextEdit *editor = ui->txtinput;
    QTextCursor cursor = editor->textCursor();
    std::cout << cursor.blockNumber() << std::endl;
}

void editor::imprimirTabla()
{
    tablaSimbolos *tablaActual = recorrido1->tabla;
    if(tablaActual!=NULL)
    {
        ui->tablaSimbolos->clear();
        ui->tablaSimbolos->setColumnCount(13);
        ui->tablaSimbolos->setRowCount(tablaActual->listaSimbolos->count()+1);
        ui->tablaSimbolos->setItem(0, 0, new QTableWidgetItem("Nombre",1));
        ui->tablaSimbolos->setItem(0, 1, new QTableWidgetItem("Id",4));
        ui->tablaSimbolos->setItem(0, 2, new QTableWidgetItem("Tipo",1));
        ui->tablaSimbolos->setItem(0, 3, new QTableWidgetItem("Dimensión",1));
        ui->tablaSimbolos->setItem(0, 4, new QTableWidgetItem("Tamaño",1));
        ui->tablaSimbolos->setItem(0, 5, new QTableWidgetItem("Rol",1));
        ui->tablaSimbolos->setItem(0, 6, new QTableWidgetItem("Ambito",4));
        ui->tablaSimbolos->setItem(0, 7, new QTableWidgetItem("Dirección Local",1));
        ui->tablaSimbolos->setItem(0, 8, new QTableWidgetItem("Dirección Global",1));
        ui->tablaSimbolos->setItem(0, 9, new QTableWidgetItem("Linea",1));
        ui->tablaSimbolos->setItem(0, 10, new QTableWidgetItem("Columna",1));
        ui->tablaSimbolos->setItem(0, 11, new QTableWidgetItem("Herencia",1));
        ui->tablaSimbolos->setItem(0, 12, new QTableWidgetItem("Dimensionales",1));
        for(int i =0; i<tablaActual->listaSimbolos->count();i++)
        {
            Simbolo simbolo =tablaActual->listaSimbolos->value(i);
            ui->tablaSimbolos->setItem(i+1, 0, new QTableWidgetItem(simbolo.nombre,1));
            ui->tablaSimbolos->setItem(i+1, 1, new QTableWidgetItem(simbolo.id,4));
            ui->tablaSimbolos->setItem(i+1, 2, new QTableWidgetItem(simbolo.tipo,1));
            ui->tablaSimbolos->setItem(i+1, 3, new QTableWidgetItem(QString::number(simbolo.dimension),1));
            ui->tablaSimbolos->setItem(i+1, 4, new QTableWidgetItem(QString::number(simbolo.tamano),1));
            ui->tablaSimbolos->setItem(i+1, 5, new QTableWidgetItem(simbolo.rol,1));
            ui->tablaSimbolos->setItem(i+1, 6, new QTableWidgetItem(simbolo.ambito,4));            
            ui->tablaSimbolos->setItem(i+1, 7, new QTableWidgetItem(QString::number(simbolo.direccionLocal),1));
            ui->tablaSimbolos->setItem(i+1, 8, new QTableWidgetItem(QString::number(simbolo.direccionGlobal),1));
            ui->tablaSimbolos->setItem(i+1, 9, new QTableWidgetItem(QString::number(simbolo.linea),1));
            ui->tablaSimbolos->setItem(i+1, 10, new QTableWidgetItem(QString::number(simbolo.columna),1));
            ui->tablaSimbolos->setItem(i+1, 11, new QTableWidgetItem(simbolo.padre,1));
            QString tamanos = "";
            for(int i = 0 ; i <simbolo.listaDimensiones->count(); i++){ tamanos += "$" + simbolo.listaDimensiones->value(i);}
            ui->tablaSimbolos->setItem(i+1, 12, new QTableWidgetItem(tamanos,1));
        }
    }
}

void editor::imprimirErrores()
{
    ui->tablaErrores->clear();
    ui->tablaErrores->setColumnCount(4);
    ui->tablaErrores->setRowCount(listaErrores->count()+1);
    ui->tablaErrores->setItem(0, 0, new QTableWidgetItem("Tipo",10));
    ui->tablaErrores->setItem(0, 1, new QTableWidgetItem("Descripcion",10));
    ui->tablaErrores->setItem(0, 2, new QTableWidgetItem("Linea",1));
    ui->tablaErrores->setItem(0, 3, new QTableWidgetItem("Columna",1));
    QString errores = "";
    for(int i =0; i<listaErrores->count(); i++)
    {
        errorT error = listaErrores->value(i);
        ui->tablaErrores->setItem(i+1, 0, new QTableWidgetItem(error.tipo,10));
        ui->tablaErrores->setItem(i+1, 1, new QTableWidgetItem(error.desc,10));
        ui->tablaErrores->setItem(i+1, 2, new QTableWidgetItem(QString::number(error.linea),1));
        ui->tablaErrores->setItem(i+1, 3, new QTableWidgetItem(QString::number(error.columna),1));
    }

    ui->txtConsola->setText(errores);
}

