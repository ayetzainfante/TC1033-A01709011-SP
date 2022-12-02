/*
* Proyecto DREAMPACKAGE
* Ayetza Yunnuen Infante Garcia
* A01709011
* 02/12/2022
* 
* Esta es clase se define el objeto de tipo denuncia;
* esta se realizo a partir de un puntero que guarda el dato de memoria y en la clase
* agencia se manda a llamar, para que este pueda generarse en el main con un puntero 
* y nombrandolo; esta clase contiene los atributos necesarios para que el usuario 
* pueda generar una denuncia.
*/
#ifndef DENUNCIAS_H
#define DENUNCIAS_H
#include <string>
#include <iostream>

using namespace std;
//Se crea la clase denuncias
class Denuncias
{
//Declaramos atributos privados de la clase
private:
    string fecha,descripcion; 
//Metodos publicos
public:
/* *
* Se crea el constructor que recibe sus respectivas variables
* (fecha,descripcion) 
*/
    Denuncias(string, string); 
//getters
   string getFecha();
   string getDescripcion();
//setters
   void setFecha(string);
   void setDescripcion(string);
   
};
/* *
* Constructor que recibe Fecha, Descripcion
* @param string: Fecha, Descripcion
* @return fecha, descripcion
*/
Denuncias::Denuncias(string Fecha, string Descripcion)
{
//asignacion de atributos
    fecha = Fecha;
    descripcion = Descripcion;
}
//getters y setters de sus respectivos atributos
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
