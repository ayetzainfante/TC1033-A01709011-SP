/*

*/
#ifndef AGENCIA_H
#define AGENCIA_H
#include "Denuncias.h"
#include <string>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

//creamos clase
class Agencia{
 
  private: //datos privados
 
    string date,  country, nom;
    Denuncias* objDenuncia;
  public:
  //constructor
    Agencia(string,string,string, Denuncias*);

    //getters
    string getDate();
    string getCountry();
    string getNom();
    
    void setCountry(string);
    void setDate(string);
    void setNom(string);
};

using namespace std;
//constructor con los datos
Agencia::Agencia( string Date, string Country, string Nom, Denuncias* oDenuncia){

  nom = Nom;
  
  date = Date;
  
  country = Country;
  
}

//getters

string Agencia::getDate(){
  
  return date; 

}

string Agencia::getNom(){

  return nom;  

}

string Agencia::getCountry(){

  return country;

}

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
