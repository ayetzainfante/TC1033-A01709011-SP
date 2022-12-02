/*
* Proyecto DREAMPACKAGE
* Ayetza Yunnuen Infante Garcia
* A01709011
* 02/12/2022
* 
* Esta clase es la clase padre la cual hereda la clase: Cliente.h
* esta clase contiene los atributos necesarios para que el usuario pueda ingresar sus datos
* personas y pueda crear su cuenta u obtener su registro de datos.
*
*/
#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>

using namespace std;
//Metodos publicos
class Persona
{
//Declaramos atributos privados de la clase
  private:
    string name, user, password;
    int long phone;

  public:
/* *
* Se crea el constructor que recibe sus respectivas variables (name, user, password, phone) 
*/
    Persona();
    Persona(string,string,string,int long);
    
    //getters
    string getName();

    string getUser();

    string getPassword();

    int long getPhone();

    //setters
    void setName(string nom);

    void setPhone(int long tel);

    void setUser(string us);

    void setPassword(string pas);
  
};
using namespace std;
/* *
* Constructor que recibe nom,us,pas,tel
* @param string: nom,us,pas
* int long: tel
* @return name,phone,user,password
*/
Persona::Persona(string nom, string us, string pas,int long tel){
 
//Asignacion de Variables
  name = nom;
 
  user = us;
  
  phone=tel;
  
  password = pas;
 
 
  
}
//getters y setters de sus respectivas varibales
string Persona::getName(){
 
  return name;

}

void Persona::setName(string nom){

  name=nom;

}

int long Persona::getPhone(){

  return phone;

}

void Persona::setPhone(int long tel){

  phone=tel;

}

string Persona::getUser(){

  return user;

}


void Persona::setUser(string us){

  user=us;

}


string Persona::getPassword(){

  return password;

}

void Persona::setPassword(string pas){
    password = pas;
}

#endif // CLIENTE_H

