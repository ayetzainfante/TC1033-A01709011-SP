#ifndef CLIENTE_H
#define CLIENTE_H
#include "Personas.h"
class Cliente: public Persona
{
private:
    int viajes, viajesCancelados;
    bool accesoPromociones;
public:
    Cliente(string, string, string, int long,int,int,bool);
    
     int getViajes();
    
    int getViajesCancelados();
    
    float getEndeudamiento();
    
    bool getAccesoPromociones();
    
    void setViajes(int Viajes);
    
    void setViajesCancelados(int ViajesC);
    
    void setAccesoPromociones(bool AccesoPromociones);
};

Cliente::Cliente(string name, string user, string password, int long phone,int Viajes, int ViajesCancelados,bool AccesoPromociones):Persona(name,user,password,phone){
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
