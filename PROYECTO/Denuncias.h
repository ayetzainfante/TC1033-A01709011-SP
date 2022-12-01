#ifndef DENUNCIAS_H
#define DENUNCIAS_H
#include <string>
#include <iostream>

using namespace std;

class Denuncias
{
private:
    string fecha,descripcion;
public:
    Denuncias(string, string);
   string getFecha();
   string getDescripcion();
   void setFecha(string);
   void setDescripcion(string);
   
};

Denuncias::Denuncias(string Fecha, string Descripcion)
{
    fecha = Fecha;
    descripcion = Descripcion;
}

string Denuncias::getDescripcion(){
    return descripcion;
}

void Denuncias::setDescripcion(string Descripcion){
    descripcion = Descripcion;
}

void Denuncias::setFecha(string Fecha){
    fecha = Fecha;
}

string Denuncias::getFecha(){
    return fecha;
}

#endif // DENUNCIAS_H
