#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>


using namespace std;

class Persona
{

  private:

    string name, user, password;
    int phone;

  public:

    Persona();

    Persona(string,string,string,int);

    ~Persona();
    
    //getters
    string getName();

    string getUser();

    string getPassword();

    int getPhone();

    //setters
    void setName(string nom);

    void setPhone(int tel);

    void setUser(string us);

    void setPassword(string pas);
  
};
using namespace std;

Persona::Persona(string nom, string us,  string pas,int tel){
 
  name = nom;
 
  user = us;
  
  phone=tel;
  
  password = pas;
 
 
  
}

Persona::~Persona(){
}

string Persona::getName(){
 
  return name;

}

void Persona::setName(string nom){

  name=nom;

}

int Persona::getPhone(){

  return phone;

}

void Persona::setPhone(int tel){

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

