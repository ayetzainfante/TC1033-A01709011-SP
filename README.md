# TC1033-A01709011-SP
//clase 1; Destino
#include<string>
using namespace std;
class Destino{
private:
  string pais1;
  string pais2;
  string pais3;

public:
  Destino();
  Destino(string p1,string p2,string p3): pais1(p1), pais2(p2), pais3(p3){};
  
  string get_pais1();
  string get_pais2();
  string get_pais3();

  void set_pais1(string );
  void set_pais2(string); 
  void set_pais3(string);
};
//getters
string Destino::get_pais1(){
  return pais1;
}
string Destino::get_pais2(){
    return pais2;
}
string Destino::get_pais3(){
    return pais3;
}
//setters
void Destino::set_pais1(string p1){
  pais1 = p1;
}
void Destino::set_pais2(string p2){
    pais2 = p2;
}

void Destino::set_pais3(string p3){
    pais3 = p3;
}

//clase 2; Usuario
#include <iostream>
using namespace std;

class Usuario{
private:
  string nombre;
  int edad; 
  string fecha;

public:
  Usuario();
  Usuario(string no, int ed, string fe): nombre(no), edad(ed), fecha(fe){};
  
  string get_nombre();
  int get_edad();
  string get_fecha();

  void set_nombre(string );
  void set_edad(int); 
  void set_fecha(string);
};

//getters
string Usuario::get_nombre(){
  return nombre;
}
int Usuario::get_edad(){
    return edad;
}
string Usuario::get_fecha(){
    return fecha;
}

//setters
void Usuario::set_nombre(string no){
  nombre = no;
}
void Usuario::set_edad(int ed){
  edad = ed;
}
void Usuario::set_fecha(string fe){
  fecha = fe;
}

//clase 3; Hotel
#include <iostream>
using namespace std;
class Hotel{
private:
  string nombre;
  float tarifa;
  string oferta; 

public:
  Hotel();
  Hotel(string no, float ta, string of): nombre(no), tarifa(ta), oferta(of){};
  
  string get_nombre();
  float get_tarifa();
  string get_oferta();

  void set_nombre(string );
  void set_tarifa(float); 
  void set_oferta(string);
};

//getters
string Hotel::get_nombre(){
  return nombre;
}
float Hotel::get_tarifa(){
    return tarifa;
}
string Hotel::get_oferta(){
    return oferta;
}

//setters
void Hotel::set_nombre(string no){
  nombre = no;
}
void Hotel::set_tarifa(float ta){
    tarifa = ta;
}
void Hotel::set_oferta (string of){
    oferta = of;
}

//main.cpp
#include <iostream>
#include "Destino.h"
#include "Usuario.h"
#include "Hotel.h"
using namespace std;

int main (){
    Destino obj_1("Francia","España","Italia");
    cout<<"Destino: "<<obj_1.get_pais1()<<", "<<obj_1.get_pais2()<<", "<<obj_1.get_pais3()<<endl;

    Usuario obj_2("Sylvanna Cantor", 20, "12/12/2022");
    cout<<"Usuario: "<<obj_2.get_nombre()<<", "<<obj_2.get_edad()<<", "<<obj_2.get_fecha()<<endl;

    Hotel obj_3("Le Petite Village", 1350, "Incluye: desayuno, comida, cena y spa.");
    cout<<"Hotel y Tarifa: "<<obj_3.get_nombre()<<", "<<obj_3.get_tarifa()<<", "<<obj_3.get_oferta()<<endl;

}



