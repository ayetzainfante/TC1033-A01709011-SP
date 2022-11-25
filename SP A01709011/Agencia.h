//librerías que están en uso
#include <string>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

//creamos clase
class Agencia{
 
  private: //datos privados
 
    string date, agen, country;

  public:
  //constructor
    Agencia();

    //getters
    string getDate();
  
    string getAgen();
  
    string getCountry();
};

using namespace std;
//constructor con los datos
Agencia::Agencia(){

  agen = "DREAMTRAVEL agencia numero 1 en viajes";
  
  date = "24/02/2022";
  
  country = "México";
}

//getters

string Agencia::getDate(){
  
  return date; 

}

string Agencia::getAgen(){

  return agen;  

}

string Agencia::getCountry(){

  return country;

}
