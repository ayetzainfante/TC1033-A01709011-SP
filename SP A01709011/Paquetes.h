#include <string>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

//creación de clase
class Paquetes{//datos privados

  private:

    string date, paises, name, duracion;

    float tarifa;

  public: //datos públicos

    Paquetes();

    bool numpaises[1][11];

    //getters
    string getDate();
    
    string getName();
    
    string getDuracion();
    
    string getPaises();
    
    float getTarifa();
    
    //setters
    void setDate(string fecha);
    
    void setName(string nomb);
    
    void setDuracion(string dur);
    
    void setTarifa(float tarifa);
    
    void setPaises(string vuelNumb);
    
    void vuelos();

};

using namespace std;
//constructor
Paquetes::Paquetes(){

  date = ""; 
  name = "";
  duracion = "";
  paises = "";
  tarifa = 35000;
  for (int i=0;i<4;i++)
    for(int j=0;j<30;j++)
      numpaises[i][j] = false;
}

//getters

string Paquetes::getDate(){
  return date;
}

string Paquetes::getName(){
  return name;
}

string Paquetes::getDuracion(){
  return duracion;
}

string Paquetes::getPaises(){
  return paises;
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

void Paquetes::setDuracion(string dur){
  duracion=dur;
}

void Paquetes::setPaises(string pa){
  paises=pa;
}

void Paquetes::setTarifa(float precio){
  tarifa=precio;
}
