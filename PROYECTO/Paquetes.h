/*
* Proyecto DREAMPACKAGE
* Ayetza Yunnuen Infante Garcia
* A01709011
* 02/12/2022
* 
* Esta clase es la clase padre la cual hereda las clases: PaquetesEnvios.h y PaquetesRetenidos.h
* esta clase contiene los atributos necesarios para que el usuario pueda ingresar sus datos
* y pueda llevar a cabo su proceso de envio.
*
*/
#ifndef PAQUETES_H
#define PAQUETES_H
#include <string>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

//Se crea la clase Paquetes
class Paquetes{

//Declaramos atributos privados de la clase
  private:

    string date, paises, name;

    int continente, postal;

    float tarifa;

//Metodos publicos
  public: 
/* *
* Se crea el constructor que recibe sus respectivas variables (date, paises, name, 
* continente, postal, tarifa)
*/
    Paquetes(string,string,string,int, int,float); 

    //getters
    string getDate();
    
    string getName();
    
    string getPaises();
    
    int getContinente();

    int getPostal();
    
    float getTarifa();
    
    //setters
    void setDate(string fecha);
    
    void setName(string nomb);

    void setPaises(string vuelNumb);

    void setContinente (int cont);

    void setPostal (int cp);

    void setTarifa(float Tarifa);

};

using namespace std;
/* *
* Constructor que recibe fecha,nomb,Paises,cont,cp,Tarifa
* @param string: fecha,nomb,Paises
* int: cont,cp
* float: Tarifa
* @return date,name,paises,continente,postal,tarifa
*/
Paquetes::Paquetes(string fecha, string nomb, string Paises, int cont, int cp, float Tarifa){
//Asignacion de atributos
    date = fecha;
    name = nomb;
    continente = cont;
    postal = cp;
    paises = Paises;
    tarifa = Tarifa;
}

//getters

string Paquetes::getDate(){
  return date;
}

string Paquetes::getName(){
  return name;
}
int Paquetes::getContinente(){
  return continente;
}
string Paquetes::getPaises(){
  return paises;
}

int Paquetes::getPostal(){
  return postal;
}

float Paquetes::getTarifa(){
  return tarifa;
}

//setters

void Paquetes::setDate(string fecha){
  date=fecha;
}

void Paquetes::setName(string nomb){
  name=nomb;
}
void Paquetes::setContinente(int cont){
  continente=cont;
}
void Paquetes::setPostal(int cp){
  postal=cp;
}

void Paquetes::setPaises(string Paises){
  paises=Paises;
}

void Paquetes::setTarifa(float Tarifa){
  tarifa=Tarifa;
}

#endif // PAQUETES_H