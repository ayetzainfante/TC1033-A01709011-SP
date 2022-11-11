#include <iostream>
using namespace std;
//clase 3; Hotel
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
