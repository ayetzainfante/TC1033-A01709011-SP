#include <string>
#include <iostream>
#include <string>

using namespace std;

class Cliente{

  private:

    string name, user, password, phone;

  public:

    Cliente();

    Cliente(string);

    ~Cliente();
    
    //getters
    string getName();

    string getUser();

    string getPassword();

    string getPhone();

    //setters
    void setName(string nom);

    void setPhone(string tel);

    void setUser(string us);

    void setPassword(string pas);
  
};
using namespace std;

Cliente::Cliente(){
 
  name = "";
 
  user = "";
 
  phone="";
  
}

Cliente::~Cliente(){
}

string Cliente::getName(){
 
  return name;

}

void Cliente::setName(string nom){

  name=nom;

}

string Cliente::getPhone(){

  return phone;

}

void Cliente::setPhone(string tel){

  phone=tel;

}

string Cliente::getUser(){

  return user;

}


void Cliente::setUser(string us){

  user=us;

};
