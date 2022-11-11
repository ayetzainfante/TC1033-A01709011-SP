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
