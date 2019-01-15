#include "codigo3d.h"
#include <QList>
#include <primerRecorrido.h>
extern  primerRecorrido *recorrido1;
Codigo3d::Codigo3d()
{
    this->cadena3d ="";
    this->etiqueta = 0;
    this->temporal = 0;
    this->pilaAmbitos = new QList<QString>();
    this->pilaAmbitos->append("global");
    this->NADA_ = 78331339*7;
}
QString Codigo3d::genEti()
{
    return "L" + QString::number(etiqueta++);
}

QString Codigo3d:: genTemp()
{
    return "t" +QString::number(temporal++);
}

void Codigo3d:: apilarMetodo(QString nombreMetodo)
{
    this->metodoActual = nombreMetodo;
    this->pilaAmbitos->append(nombreMetodo);
}

void Codigo3d:: desapilarMetodo()
{
    this->pilaAmbitos->pop_back();
    metodoActual = this->pilaAmbitos->value(this->pilaAmbitos->count()-1);
    tablaSimbolos * tabla = recorrido1->tabla;
    int a = 100;
}

QString Codigo3d::getAmbitoActual()
{
   QString ambito ="";
   for(int i =0 ; i < this->pilaAmbitos->count(); i++)
   {
       if(ambito=="")
       {
           ambito = this->pilaAmbitos->value(i);
       }
       else
       {
           ambito += "$"+ this->pilaAmbitos->value(i);
       }
   }
   return ambito;
}

QString Codigo3d:: getMetodoActual()
{
    return this->metodoActual;
}

int Codigo3d:: getTamanoAmbitoActual()
{
    QString actual = getAmbitoActual();
    /*Generamos el ambito actual
    QString actual = "";
    for(int i = 0; this->pilaAmbitos->count()-1; i++)
    {
        if(i==0)
        {
            actual = this->pilaAmbitos->value(i);
        }
        else
        {
            actual += "$" + this->pilaAmbitos->value(i);
        }
    }
    */
    int contador  = 0;
    for(int i = 0 ; i < recorrido1->tabla->listaSimbolos->count(); i++)
    {
        if(actual == recorrido1->tabla->listaSimbolos->value(i).ambito)
        {
            contador++;
        }
    }
    return contador;
}

int Codigo3d:: getTamanoAmbitoActual(QString actual)
{
    int contador  = 0;
    for(int i = 0 ; i < recorrido1->tabla->listaSimbolos->count(); i++)
    {
        if(actual == recorrido1->tabla->listaSimbolos->value(i).ambito)
        {
            contador++;
        }
    }
    return contador;
}

Simbolo Codigo3d:: getSimboloPorId(QString id)
{
    Simbolo simbolo ;
    for(int i = 0 ; i< recorrido1->tabla->listaSimbolos->count(); i++)
    {
        if(recorrido1->tabla->listaSimbolos->value(i).id == id)
        {
            return recorrido1->tabla->listaSimbolos->value(i);
        }
    }
    return simbolo;
}

Simbolo Codigo3d::getSimboloPorNombre(QString nombre)
{
    Simbolo simbolo ;
    tablaSimbolos * tabla = recorrido1->tabla;
    QString ambito = getAmbitoActual();    
    for(int i = 0 ; i< recorrido1->tabla->listaSimbolos->count(); i++)
    {
        if(recorrido1->tabla->listaSimbolos->value(i).nombre ==nombre&&
           recorrido1->tabla->listaSimbolos->value(i).ambito == ambito)
        {
            return recorrido1->tabla->listaSimbolos->value(i);
        }
    }
    return simbolo;
}

