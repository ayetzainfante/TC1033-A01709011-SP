/*
* Proyecto DREAMPACKAGE
* Ayetza Yunnuen Infante Garcia
* A01709011
* 02/12/2022
* 
* Esta clase es la clase que se hereda de la clase Personas.h
* contiene los metodos para crear un seguimiento a la cuenta del usuario
* segun los respectivos atributos de esta clase
*
 */
#ifndef CLIENTE_H
#define CLIENTE_H

//Se manda a llamar la clase padre 
#include "Personas.h"
class Cliente: public Persona
{

//Declaramos atributos privados de la clase
private:
    int viajes, viajesCancelados;
    bool accesoPromociones;

//Metodos publicos
public:
/* *
* Se crea el constructor que recibe las variables heredadas de la clase padre
* y recibe sus respectivas variables (viajes,viajesCancelados,accesoPromociones)
*/
    Cliente(string, string, string, int long,int,int,bool);
//Getters
    int getViajes();
    
    int getViajesCancelados();
    
    bool getAccesoPromociones();    
//Setters
    void setViajes(int Viajes);
    
    void setViajesCancelados(int ViajesC);
    
    void setAccesoPromociones(bool AccesoPromociones);
};
/* *
* Constructor que recibe Viajes, ViajesCancelados, AccesoPromociones  
* @param int: Viajes, ViajesCancelados
* bool: accesoPromociones
* @return viajes, viajesCancelados, accesoPromociones
*/
Cliente::Cliente(string name, string user, string password, int long phone,int Viajes, int ViajesCancelados,bool AccesoPromociones):Persona(name,user,password,phone){
//Asignacion de Variables
viajes= Viajes;
viajesCancelados = ViajesCancelados;
accesoPromociones = AccesoPromociones;   
}

int Cliente::getViajes(){
    return viajes;
}

//setters

void Cliente::setViajes(int Viajes){
  viajes=Viajes;
}

int Cliente::getViajesCancelados(){
  return viajesCancelados;
}

//setters

void Cliente::setViajesCancelados(int ViajesC){
  viajesCancelados=ViajesC;
}

bool Cliente::getAccesoPromociones(){
  return accesoPromociones;
}

//setters

void Cliente::setAccesoPromociones(bool AccesoPromociones){
  accesoPromociones=AccesoPromociones;
}




#endif // CLIENTE_H
