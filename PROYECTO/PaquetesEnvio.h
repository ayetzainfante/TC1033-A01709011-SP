#ifndef PAQUETESENVIO_H
#define PAQUETESENVIO_H
#include "Paquetes.h"

class PaquetesEnvio:public Paquetes 
{
private:
    float valor;
    string remitente,destinatario,remitenteLugar, destinatarioLugar;
public:
    PaquetesEnvio(string,string,string,int,int,float,float,string,string,string,string);
    ~PaquetesEnvio();
    float getValor();
    string getRemitente();
    string getDestinatario();
    string getRemitenteLugar();
    string getDestinatarioLugar();
    void setValor(float);
    void setRemitente(string);
    void setDestinatario(string);
    void setRemitenteLugar(string);
    void setDestinatarioLugar(string);
};
PaquetesEnvio::~PaquetesEnvio(){}
PaquetesEnvio::PaquetesEnvio(string date, string name, string paises, int continente,int postal, float tarifa,float Valor,string Remitente,string Destinatario, string RemitenteLugar,string DestinatarioLugar):Paquetes(date,name,paises,continente,postal,tarifa){
    valor = Valor;
    remitente = Remitente;
    destinatario= Destinatario;
    remitenteLugar = RemitenteLugar;
    destinatarioLugar = DestinatarioLugar;
}

float PaquetesEnvio::getValor(){
    return valor;
    }

void PaquetesEnvio::setValor(float Valor){
    valor = Valor;
}

string PaquetesEnvio::getRemitente(){
    return remitente;
    }

void PaquetesEnvio::setRemitente(string Remitente){
    remitente = Remitente;
}


string PaquetesEnvio::getDestinatario(){
    return destinatario;
    }

void PaquetesEnvio::setDestinatario(string Destinatario){
    destinatario = Destinatario;
}


string PaquetesEnvio::getRemitenteLugar(){
    return remitenteLugar;
    }

void PaquetesEnvio::setRemitenteLugar(string RemitenteLugar){
    remitenteLugar= RemitenteLugar;
}

string PaquetesEnvio::getDestinatarioLugar(){
    return destinatarioLugar;
    }

void PaquetesEnvio::setDestinatarioLugar(string DestinarioLugar){
    destinatarioLugar= DestinarioLugar;
}


#endif // PAQUETESENVIO_H
