#include "codigo3d.h"

Codigo3d::Codigo3d()
{
    this->cadena3d ="";
    this->etiqueta = 0;
    this->temporal = 0;
}

QString Codigo3d::genEti()
{
    return "L" + etiqueta++;
}

QString Codigo3d:: genTemp()
{
    return "t" +temporal++;
}

