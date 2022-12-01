#ifndef PAQUETES_H
#define PAQUETES_H
#include <string>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

//creacion de clase
class Paquetes{//datos privados

  private:

    string date, paises, name;

    int continente, postal;

    float tarifa;

  public: //datos publicos

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
//constructor
Paquetes::Paquetes(string fecha, string nomb, string Paises, int cont, int cp, float Tarifa){

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