/*
* Proyecto DREAMPACKAGE
* Ayetza Yunnuen Infante Garcia
* A01709011
* 02/12/2022
*/

/*
* Este main funciona con interaccion del usuario simulando servicios,  
* hay algunos servicios que ya tienen algun objeto pre hecho para demostrar las 
* relaciones del diagrama UML o que se pueda hacer algún proceso sin teclear informacion previa.
*
*/

//librerias y clases que se anexan
#include <iostream>
#include "Agencia.h"
#include "Paquetes.h"
#include "Personas.h"
#include "Cliente.h"
#include "PaquetesRetenidos.h"
#include "PaquetesEnvio.h"
#include "Denuncias.h"

//declaraciones de variables
using namespace std;
string user,password,fecha, hora, nom, country,respuesta,date,remitente,remitenteLugar,destinatarioLugar,paises,destinatario,name,motivo;
string s1;
float valor,tarifa;
int opcion, cont, cp,postal,continente,Viajes,ViajesCancelados; 
int long tel, phone;
bool  multa;
bool AccesoPromociones;

//menu principal
int main(int argc, char **argv)
{
    while(true){
        cout<<"\n";
        cout<<"Bienvenido/a a la pagina oficial de DreamPackage"<<endl;
        cout<<"\n";
        cout<<"Para crear un nuevo envio presione 1\nPara checar el estado y cotizacion de su envio presione 2\nSi quiere checar su cuenta o registrarse presione 4"<<endl;
        cout<<"Si ya ha tenido un servicio y quiere quejarse seleccione 3"<<endl;
        cout<<"Si quiere salir presione 5"<<endl;
        cout<<"\n";
        cin>> opcion;
            if(opcion ==1)
            {
            Denuncias* denuncia = new Denuncias("" , "");
            cout<<"PARA GENERAR SU DENUNCIA\nINGRESE LOS SIGUIENTES DATOS"<<endl;
            cout<<"\n";
            cout <<"Escriba la fecha de envio de su paquete(dd/mm/aa): "<<endl;
            cout<<" ";
            cin>> fecha;
            cout<<"\n";
            cout <<"Escriba el numero de continente al que sera mandado el paquete\n(1. America, 2. Europa, 3. Asia, 4.Oceania): "<<endl;
            cin>> cont;
            cout<<"\n";
            cout <<"Escriba la ciudad, estado y pais al que sera enviado el paquete con respecto al \ncontinente seleccionado anteriormente: "<<endl;   
            cin>>country;
            getline(cin,s1);
            cout<<"\n";
            cout<<"Escriba su nombre completo: "<<endl;
            cin>>nom;
            getline(cin,s1);
            cout<<"\n";
            cout<<"\n";
            cout<<"Ingrese el codigo postal a donde sera enviado el paquete: "<<endl;
            cin>> cp;
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"\n";
            Agencia* NewTimes = new Agencia(fecha, country, nom, denuncia);

            cout<<"Su cotizacion esta casi lista, en unos minutos un agente se comunicara con usted via whatsapp"<<endl;
            cout<<"A continuacion se anexa el resumen de sus datos de envio: "<<endl;
            cout<<"Nombre del titular:  " <<NewTimes->getNom()<<endl;
            cout<<"Ubicacion del pedido:  "<<NewTimes->getCountry()<<endl;
            cout<<"Fecha de envio:  "<<NewTimes->getDate()<<endl;
            cout<<"------------------------------------------------------------"<<endl;
            cout<<"\n";
        
            }
            else if (opcion ==2)
                {
                cout<<"\n";
                cout<<"Si tiene un envio pendiente, presione 1"<<endl;
                cout<<"Si esta en proceso de envio y desea cotizar su costo total, presione 2"<<endl;
                cin >> respuesta;
                if (respuesta=="1")
                    {
                    cout<<"INGRESE LOS SIGUIENTES DATOS"<<endl;
                    cout<<"\n";
                    cout <<"Hora de envio(ej.21:30pm): "<<endl;
                    cin>>hora;
                    cout<<"\n";
                    cout <<"Ingrese el numero de continente de envio(1,2,3,4): "<<endl;
                    cin>>continente;
                    cout<<"\n";
                    cout <<"Pais de envio: "<<endl;
                    cin>>paises;
                    cout<<"\n";
                    cout<<"Ingrese su numero telefonico (sin espacios,ni guiones): "<<endl;
                    cin>>tel;
                    cout<<"\n";
                    cout<<"Motivo: "<<endl;
                    cin>>motivo;
                    getline(cin,s1);
                    cout<<"\n";
                    cout<<"Multa: "<<endl;
                    
                    cout<<"\n";
                    PaquetesRetenidos pRetenido(date,paises,name,continente,postal,tarifa,hora,motivo,multa);
                    cout<< pRetenido.getTarifa()<<endl;
                    cout<< pRetenido.getPaises()<<endl;
                    cout<< pRetenido.getMulta()<<endl;
                    cout <<pRetenido.getMotivo()<<endl;
                    cout<<"\n";
                    cout<<"El paquete esta retenido, a continuacion un agente\n se comunicara con usted via whatsapp para llevar seguimiento a su caso"<<endl;
                    cout<<"\n";
                    cout<<"------------------------------------------------------------"<<endl;
                    cout<<"\n";
                    }
                else if(respuesta=="2")
                    {
                    cout<<"\n";
                    cout<<"Para finalizar su proceso de envio, ingrese los siguientes datos"<<endl;
                    cout<<"\n";
                    cout<<"Ingrese el remitente: "<<endl;
                    getline(cin,s1);
                    cout << s1;
                    cout<<"\n";
                    getline(cin,s1);
                    cout << s1;
                    cout<<"\n";
                    cout<<"Ingrese el destinatario: "<<endl;
                    getline(cin,s1);
                    cout << s1;
                    cout<<"\n";
                    cout<<"Ingrese el pais remitente: "<<endl;
                    getline(cin,s1);
                    cout << s1;
                    cout<<"\n";
                    cout<<"Ingrese el codigo postal a donde llegara el paquete: "<<endl;
                    cout<<"\n";
                    cin>>cp;
                    cout<<"\n";
                    cout<<"Ingrese el pais destinatario: "<<endl;
                    getline(cin,s1);
                    cout << s1;
                    cout<<"\n";
                    cout<<"Ingrese el valor monetario de su producto "<<endl;
                    cout<<"\n";
                    cin>>valor;
                    cout<<"\n";
                    cout<<"El total de su producto es de: $ "<<valor+1200<<endl;
                    cout<<"\n";
                    cout<<"------------------------------------------------------------"<<endl;
                    cout<<"\n";
                    }    
                }    
            else if (opcion ==3){
                cout<<"GENERACION DE QUEJA O DENUNCIA\nCONTESTE TODOS LOS DATOS REQUERIDOS"<<endl;
                cout <<"Escriba la fecha del dia que realizo el proceso de envio (dd/mm/aa): "<<endl;
                cout<<"\n";
                cin>>fecha;
                cout <<"Escriba el motivo de su queja o denuncia: "<<endl;
                cin>>motivo;
                getline(cin,s1);
                cout << s1;
                cout <<"Ingrese su numero telefonico(ingrese el numero sin espacios ni lineas): "<<endl;
                cin>>tel;
                cout<<"\n";
                Denuncias denunciaSola(fecha,motivo);
                cout<<"\n";
                cout <<"Denuncia enviada" <<endl;
                cout<<"\n";
                cout <<"En breve un agente se comunicara con usted"<<endl;
                cout<<"\n";
                cout<<"Es necesario proporcionar datos especificos para adquirir\nuna solucion mas rapida y eficaz a su caso"<<endl;
                cout<<"------------------------------------------------------------"<<endl;
                cout<<"\n";
               
                }
            else if (opcion ==4){
                cout<<"Si desea checar su estado de cuenta presione 1"<<endl;
                cout<<"Si desea registrarse presione 2"<<endl;
                cin>>respuesta;
                if (respuesta=="1")
                {
                    Cliente client(name,user, password, phone,Viajes,ViajesCancelados,AccesoPromociones);
                    cout<<"Ingrese su ID de usario: "<<client.getUser()<<endl;
                    cin>>user;
                    cout<<"\n";
                    cout<<"Introduzca su contraseña: "<<client.getPassword()<<endl;
                    cin>>password;
                    cout<<"\n";
                    cout<<"Ingrese el numero de viajes que ha creado: "<<client.getViajes()<<endl;
                    cin>>Viajes;
                    cout<<"\n";
                    cout<<"Total de viajes cancelados: "<<client.getViajesCancelados()<<Viajes-1<<endl;
                    cout<<"\n";
                    cout<<"Acceso a promocion del 50 por ciento de descuento en todo el año"<<client.getAccesoPromociones()<<endl;
                    cout<<"\n";
                    cout<<"------------------------------------------------------------"<<endl;
                    cout<<"\n";
    
                }
                else if(respuesta=="2")
                {

                    cout<<"REGISTRESE AQUI"<<endl;
                    cout <<"Introduzca su primer nombre y primer apellido (separado por comas): "<<endl;
                    getline(cin,s1);
                    cout << s1;
                    cout<<"\n";
                    cout <<"Introduzca un ID de usuario: "<<endl;
                    getline(cin,s1);
                    cout << s1;
                    cout<<"\n";
                    cout<<"Ingrese una contraseña:" <<endl;
                    cin>>password;
                    cout<<"\n";
                    cout<<"Ingrese su numero telefonico(ingrese el numero sin espacios ni lineas): "<<endl;
                    cin>>tel;
                    cout<<"\n";
                    cout<<"Su usuario ha sido registrado exitosamente"<<endl;
                    cout<<"\n";
                    cout<<"------------------------------------------------------------"<<endl;
                }
    }
    else if (opcion ==5)
    {
        cout<<"Hasta luego :)"<<endl;
        break;
    }
    else
        {
        cout << "Repita su respuesta, por favor"<<endl;
        }
    }
        

    }



