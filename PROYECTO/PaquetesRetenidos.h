//De define la clase hija
#ifndef PAQUETESRETENIDOS_H
#define PAQUETESRETENIDOS_H
//Se manda a llamar a la clase Padre
#include "Paquetes.h"

//Se crea la clase hija PaquetesRetenidos de la clase padre Paquetes
class PaquetesRetenidos:public Paquetes
{
//Datos privados 
private:
    string hora, motivo;
    bool multa;
//Datos publicos y se genera el constructor indicando el tipo de dato en orden de cada atributo
public:
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
//Se manda a llamar a la clase y se ingresal el tipo de dato 
//de clase hija y tipo de dato de clase padre en orden
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
