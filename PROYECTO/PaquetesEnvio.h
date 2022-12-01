//Se define la clase hija
#ifndef PAQUETESENVIO_H
#define PAQUETESENVIO_H
//Se manda a llamar la clase padre 
#include "Paquetes.h"

//Se crea la clase hija de Paquetes.h l la cual es nombrada PaquetesEnvio
class PaquetesEnvio:public Paquetes 
{
//Datos Privados
//Nombramiento de atributos
private:
    float valor;
    string remitente,destinatario,remitenteLugar, destinatarioLugar;
//Datos publicos
public:
//Creacion de constructor
    PaquetesEnvio(string,string,string,int,int,float,float,string,string,string,string);//Tipo de dato
//Destructor
    ~PaquetesEnvio();
//getters
    float getValor();
    string getRemitente();
    string getDestinatario();
    string getRemitenteLugar();
    string getDestinatarioLugar();
//setters
    void setValor(float);
    void setRemitente(string);
    void setDestinatario(string);
    void setRemitenteLugar(string);
    void setDestinatarioLugar(string);
};
//Manda a llamar a la clase 
PaquetesEnvio::~PaquetesEnvio(){}
//Tipo de dato de clase hija y tipo de dato de clase padre en orden
PaquetesEnvio::PaquetesEnvio(string date, string name, string paises, int continente,int postal, float tarifa,float Valor,string Remitente,string Destinatario, string RemitenteLugar,string DestinatarioLugar):Paquetes(date,name,paises,continente,postal,tarifa){
//Asignacion a los atributos
    valor = Valor;
    remitente = Remitente;
    destinatario= Destinatario;
    remitenteLugar = RemitenteLugar;
    destinatarioLugar = DestinatarioLugar;
}
//getters y setter correspondiente a cada atributo generado en la clase hija
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
