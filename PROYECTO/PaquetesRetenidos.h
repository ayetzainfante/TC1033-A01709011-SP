#ifndef PAQUETESRETENIDOS_H
#define PAQUETESRETENIDOS_H
#include "Paquetes.h"

class PaquetesRetenidos:public Paquetes
{
private:
    string hora, motivo;
    bool multa;
public:
    PaquetesRetenidos(string,string,string,int,int,float,string,string,bool);
    ~PaquetesRetenidos();
    string getHora();
    
    string getMotivo();
    
    bool getMulta();
    
    void setHora(string Hora);
    
    void setMotivo(string Motivo);
    
    void setMulta(bool Multa);
    
};
PaquetesRetenidos::~PaquetesRetenidos(){}

PaquetesRetenidos::PaquetesRetenidos(string date, string name, string paises, int continente,int postal, float tarifa,string Hora,string Motivo, bool Multa):Paquetes(date,name,paises,continente,postal,tarifa){
    hora = Hora;
    motivo = Motivo;
    multa = Multa;
}

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
