#include <iostream>
using namespace std;

//clase 2; Usuario
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