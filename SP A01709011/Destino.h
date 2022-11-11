#include<string>
using namespace std;
//clase 1; Destino
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
