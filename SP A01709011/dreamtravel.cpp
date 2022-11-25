#include <iostream>
#include <fstream>
#include "Agencia.h"
#include "Paquetes.h"
#include "Cliente.h"
using namespace std;
//declaraciones de variables
using namespace std;

string fecha, nomb, dur, nom, phone, us, pas, tiempo;
float precio;
int personas, edad, cont, pa; 

string arreglo[2]; 
size_t pos = 0; 
int contador=0; 
int fin = 0; 

Agencia x;
Cliente y; 
Paquetes z; 

void reservaciones_cancelaciones(){
     cout<<"Escriba el numero del contiente al cual le gustaría viajar: "<<z.getPaises()<<endl;
  cout<<"1.-AFRICA, 2.-AMERICA, 3.-OCEANIA, 4.-EUROPA: ";
  cin>>cont;
  while (cont>5){
    cout<<"Lo sentimos no tenemos registrado ese numero de continente ."<<endl;
    cout<<"Escriba el número del continente al cual le gustaría viajar (1,2,3 o 4): ";
    cin>>cont;
    }

  cout<<"Ahora ingrese el numero de paises que le gustaría conocer en el contiente señalado: ";
  cin>>pa;
  while (pa>7){
    cout<<"Lo sentimos no es posible más de 7 países por contiente."<<endl;
    cout<<"Escriba el número de países que le gustaría conocer en el contiente señalada (1-7): ";
    cin>>pa;
    }

  cout<<"Ingrese la cantidad de personas que viajaran: ";
    while (personas>8){
      cout<<"Lo sentimos por motivos de disponibilidad\n no se puede viajar más de 8 personas por paquete."<<endl;
      cout<<"Vuelva a ingresar a la cantidad de personas que viajaran(1-8): ";
      cin>>personas;
      } 
   cout<<"Introduzca su nombre completo separado por guiones: "<<endl;

      cin>>nom;

      y.setName(nom);

      cout<<"Introduce tu número de teléfono: "<<endl;

      cin>>phone;

      y.setPhone(phone);

      cout<<"Confirme la tarifa:$15,000-$25,000)"<<endl;

      cin>>precio;

      z.setTarifa(precio);

      cout<<"Duración de viaje: (días o meses)"<<endl;

      cin>>dur;

      z.setDuracion(dur);

      cout<<"Países: "<<endl;

      cin>>pa;

      cout<<"Fecha: "<<endl;

      cin>>fecha;

      z.setDate(fecha);
      
      cout<<"Estimado "<<y.getName()<<endl;
      
      cout<<"Tu viaje a los países: "<<pa<<"  de duracion de: "<<tiempo<<" ha sido reservado"<<endl;

      cout<<"Le llegará la confirmación a su teléfono: "<<y.getPhone()<< " en los próximos minutos."<<endl;
      cout<<"La fecha de su viaje el día "<<z.getDate()<<" ha sido reservado"<<endl;

      cout<<"Estos son los detalles de su reservación"<<endl<<"Precio total: "<<z.getTarifa()<<endl<<"Duración: "<<z.getDuracion()<<endl<<"Fecha:"<<z.getDate()<<endl<<"Emitido por la Agencia de Viajes: "<<x.getAgen()<<endl;


    }
