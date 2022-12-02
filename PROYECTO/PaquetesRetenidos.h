/*
* Proyecto DREAMPACKAGE
* Ayetza Yunnuen Infante Garcia
* A01709011
* 02/12/2022
* 
* Esta clase es la clase que se hereda de la clase Paquetes.h
* contiene los metodos que permite al usuario checar su estado de envio ingresando
* los datos segun los respectivos atributos de la clase.
*
*/
#ifndef PAQUETESRETENIDOS_H
#define PAQUETESRETENIDOS_H
//Se manda a llamar a la clase Padre
#include "Paquetes.h"

class PaquetesRetenidos:public Paquetes
{
//Declaramos atributos privados de la clase
private:
    string hora, motivo;
    bool multa;
//Metodos publicos
public:
/* *
* Se crea el constructor que recibe las variables heredadas de la clase padre
* y recibe sus respectivas variables (hora,motivo,multa)
*/
    PaquetesRetenidos(string,string,string,int,int,float,string,string,bool);
//Getters
    string getHora();
    
    string getMotivo();
    
    bool getMulta();
//Setters 
    void setHora(string Hora);
    
    void setMotivo(string Motivo);
    
    void setMulta(bool Multa);
    
};
/* *
* Constructor que recibe hora, motivo, multa
* @param string: hora, motivo
* int: multa
* @return hora, motivo, multa
*/
PaquetesRetenidos::PaquetesRetenidos(string date, string name, string paises, int continente,int postal, float tarifa,string Hora,string Motivo, bool Multa):Paquetes(date,name,paises,continente,postal,tarifa){

//Asignacion de atributos
    hora = Hora;
    motivo = Motivo;
    multa = Multa;
}

//Getters y Setters correspondientes a cada atributo de la clase hija 
string PaquetesRetenidos::getHora(){
  return hora;
}
void PaquetesRetenidos::setHora(string Hora){
  hora=Hora;
}

string PaquetesRetenidos::getMotivo(){
  return motivo;
}

void PaquetesRetenidos::setMotivo(string Motivo){
  motivo=Motivo;
}

bool PaquetesRetenidos::getMulta(){
  return multa;
}
void PaquetesRetenidos::setMulta(bool Multa){
  multa=Multa;
}

#endif // PAQUETESRETENIDOS_H
