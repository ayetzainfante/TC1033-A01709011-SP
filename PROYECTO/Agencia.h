/*
* Proyecto DREAMPACKAGE
* Ayetza Yunnuen Infante Garcia
* A01709011
* 02/12/2022
* 
* Esta clase es una clase la cual genera el objeto denuncias por medio de la agregacion;
* esta clase contiene los atributos necesarios para que el usuario pueda crear un nuevo envio
* o generar una denuncia en caso de que servicio no haya sido conforme lo esperado.
*
*/
#ifndef AGENCIA_H
#define AGENCIA_H
#include "Denuncias.h"
#include <string>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

//Se crea la clase agencia
class Agencia{

//Declaramos atributos privados de la clase y se crea el objeto Denuncia
  private: 
 
    string date,  country, nom;
    Denuncias* objDenuncia;
//Metodos publicos
  public:
/* *
* Se crea el constructor que recibe sus respectivas variables
* (date, country,nom) 
*/
    Agencia(string,string,string, Denuncias*);

//getters
    string getDate();
    string getCountry();
    string getNom();
//setters
    void setCountry(string);
    void setDate(string);
    void setNom(string);
};

using namespace std;
/* *
* Constructor que recibe Date, Country, Nom, y el objeto Denuncia
*
* @param string: Date, Country, Nom
* Denuncias* oDenuncia
* @return date, nom, country
*/
Agencia::Agencia( string Date, string Country, string Nom, Denuncias* oDenuncia){

//Asignacion a los atributos
  nom = Nom;
  
  date = Date;
  
  country = Country;
  
}

//getters de sus respectivos atributos

string Agencia::getDate(){
  
  return date; 

}

string Agencia::getNom(){

  return nom;  

}

string Agencia::getCountry(){

  return country;

}
//setters de sus respectivos atributos
void Agencia::setNom(string Nom){
    nom=Nom;
}

void Agencia::setCountry(string Country){
    country = Country;
}

void Agencia::setDate(string Date){
    date = Date;
}

#endif // AGENCIA_H
