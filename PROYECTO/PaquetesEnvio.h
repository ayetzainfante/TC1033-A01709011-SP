/*
* Proyecto DREAMPACKAGE
* Ayetza Yunnuen Infante Garcia
* A01709011
* 02/12/2022
* 
* Esta clase es la clase que se hereda de la clase Paquetes.h
* contiene los metodos para crear un proceso de envios de paquetes con sus
* respectivos atributos.
*
*/
#ifndef PAQUETESENVIO_H
#define PAQUETESENVIO_H

//Se manda a llamar la clase padre 
#include "Paquetes.h"

class PaquetesEnvio:public Paquetes 
{
//Declaramos atributos privados de la clase
private:
    float valor;
    string remitente,destinatario,remitenteLugar, destinatarioLugar;

//Metodos publicos
public:
/* *
* Se crea el constructor que recibe las variables heredadas de la clase padre
* y recibe sus respectivas variables (valor,remitente,destinatario,
* remitenteLugar,destinatarioLugar)
*/
    PaquetesEnvio(string,string,string,int,int,float,float,string,string,string,string);
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

/* *
* Constructor que recibe valor, remitente, destinatario, remitenteLugar, destinatarioLugar
*
* @param string: remitente, destinatario, remitenteLugar, destinatarioLugar
* float: valor
* @return valor, remitente, destinatario, remitenteLugar, destinatarioLugar
*/
PaquetesEnvio::PaquetesEnvio(string date, string name, string paises, int continente,int postal, float tarifa,float Valor,string Remitente,string Destinatario, string RemitenteLugar,string DestinatarioLugar):Paquetes(date,name,paises,continente,postal,tarifa){

//Asignacion a los atributos
    valor = Valor;
    remitente = Remitente;
    destinatario= Destinatario;
    remitenteLugar = RemitenteLugar;
    destinatarioLugar = DestinatarioLugar;
}

//getters y setters correspondiente a cada atributo generado en la clase hija
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
