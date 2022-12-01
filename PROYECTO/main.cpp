//Este main funciona con interaccion del usuario simulando servicios, hay algunos servicios que ya tienen algun objeto pre hecho
//para que demostrar las relaciones del diagrama UML o que se pueda hacer algún proceso sin teclear informacion previa
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
float valor,tarifa;
int opcion, cont, phone,tel, cp,postal,continente,Viajes,ViajesCancelados; 
bool sigue = true;
bool  multa;
bool AccesoPromociones;

int main(int argc, char **argv)
{

    while(sigue == true){
        cout<<"Bienvenido/a a la pagina oficial de DreamPackage"<<endl;
        cout<<"Para crear un nuevo envio presione 1\nPara checar el estado y cotizacion de su envio presione 2\nSi quiere checar su cuenta o registrarse presione 4"<<endl;
        cout<<"Si ya ha tenido un servicio y quiere quejarse seleccione 3"<<endl;
        cout<<"Si quiere salir presione 5"<<endl;
        cin>> opcion;
            if(opcion ==1)
            {
            Denuncias* denuncia = new Denuncias("" , "");
            cout <<"Escriba la fecha de envio de su paquete(dd/mm/aa): "<<endl;
            cout<<" ";
            cin>> fecha;
            cout <<"Escriba el numero de continente al que sera mandado el paquete\n(1. America, 2. Europa, 3. Asia, 4.Oceania): "<<endl;
            cout<<" ";
            cin>> cont;
            cout <<"Escriba la ciudad, estado y pais al que sera enviado el paquete con respecto al continente seleccionado anteriormente: "<<endl;
            cout<<" ";
            cout <<"- (Recuerde que si ingresa un pais, ciudad o estado que no tenga coherencia con lo ingresado"<<endl;
            cout<< "el proceso de envio no podra llevarse a cabo exitosamente) "<<endl;
            cout<<" ";
            cin>> country;
            cout<<"Escriba su nombre completo separado por comas: "<<endl;
            cout<<" ";
            cin>> nom;
            cout<<"Ingrese el codigo postal a donde sera enviado el paquete: "<<endl;
            cout<<" ";
            cin>> cp;

            Agencia* NewTimes = new Agencia(fecha, country, nom, denuncia);

            cout<<"Su cotizacion esta casi lista, en unos minutos un agente se comunicara con usted via whatsapp"<<endl;
            cout<<"A continuacion se anexa el resumen de sus datos de envio: "<<endl;
            cout<<"Nombre del titular:  " <<NewTimes->getNom()<<endl;
            cout<<"Ubicacion del pedido:  "<<NewTimes->getCountry()<<endl;
            cout<<"Fecha de envio:  "<<NewTimes->getDate()<<endl;
            break;
            }
            else if (opcion ==2)
                {
                cout<<"Si tiene un envio pendiente, presione 1"<<endl;
                cout<<"Si esta en proceso de envio y desea cotizar su costo total, presione 2"<<endl;
                cin >> respuesta;
                if (respuesta=="1")
                    {
                    cout <<"A continuacion, contestar los datos requeridos"<<endl;
                    PaquetesRetenidos pRetenido(date,paises,name,continente,postal,tarifa,hora,motivo,multa);
                    cout <<"Hora de envio(ej.21:30pm): "<<pRetenido.getHora()<<endl;
                    cout<<" ";
                    cin>>hora;
                    cout <<"Pais de envio: "<<pRetenido.getPaises()<<endl;
                    cout<<" ";
                    cin>>country;
                    cout<<"Ingrese su numero telefonico (sin espacios,ni guiones): "<<endl;
                    cout<<" ";
                    cin>>tel;
                    cout<<"Motivo: "<<pRetenido.getMotivo()<<endl;
                    cin>>motivo;
                    cout<<" ";
                    cout<<"El paquete esta retenido, a continuacion un agente\n se comunicara con usted via whatsapp para llevar seguimiento a su caso"<<endl;
                    }
                else if(respuesta=="2")
                    {
                    cout<<"Para finalizar su proceso de envio, ingrese los siguientes datos"<<endl;
                    PaquetesEnvio pEnvio(date, name, paises,continente,postal,tarifa,valor,remitente,destinatario,remitenteLugar,destinatarioLugar);

                    cout<<"Escriba el Remitente separado por comas: "<<pEnvio.getRemitente()<<endl;
                    cout<<" ";
                    cin >>remitente;
                    cout <<"Escriba el nombre del Destinatario separado por comas: "<<pEnvio.getRemitente()<<endl;
                    cout<<" ";
                    cin>>destinatario;
                    cout<<"Escriba el pais,estado y ciudad de provinencia(separado por comas): "<<pEnvio.getRemitenteLugar()<<endl;
                    cout<<" ";
                    cin>>remitenteLugar;
                    cout<<"Escriba el pais, estado y ciudad al que va (separado por comas): "<<pEnvio.getDestinatarioLugar()<<endl;
                    cout<<" ";
                    cin >>destinatarioLugar;
                    cout <<"Escriba la fecha de envio (dd/mm/aa): "<<pEnvio.getDate()<<endl;
                    cout<<" ";
                    cin>>date;
                    cout <<"Escriba que es lo que se envia: "<<pEnvio.getName()<<endl;
                    cout<<" ";
                    cin>>name;
                    cout <<"Ingrese el valor monetario del producto(ej.1500): "<<endl;
                    cout<<" ";
                    cin>>valor;
                    cout<<"Tomando los datos anteriores el total de su producto es de: $ "<<valor+250.00<<pEnvio.getTarifa()<<endl;

                    }    
                }    
            else if (opcion ==3){
                cout <<"Escriba la fecha del dia que realizo el proceso de envio (dd/mm/aa): "<<endl;
                cout<<" ";
                cin>>fecha;
                cout <<"Escriba el motivo de su queja o denuncia: "<<endl;
                cout<<" ";
                cin>>motivo;
                cout <<"Ingrese su numero telefonico(ingrese el numero sin espacios ni lineas): "<<endl;
                cout<<" ";
                cin>>tel;
                Denuncias denunciaSola(fecha,motivo);
                cout <<"Denuncia enviada" <<endl;
                cout <<"En breve un agente se comunicara con usted"<<endl;
                cout<<"Es necesario proporcionar datos especificos para adquirir\nuna solucion mas rapida y eficaz a su caso"<<endl;
               
                }
            else if (opcion ==4){
                cout<<"Si desea checar su estado de cuenta presione 1"<<endl;
                cout<<"Si desea registrarse presione 2"<<endl;
                cin>>respuesta;
                if (respuesta=="1")
                {
                    Cliente client(name,user, password, phone,Viajes,ViajesCancelados,AccesoPromociones);
                    cout<<"Ingrese su ID de usario: "<<client.getUser()<<endl;
                    cout<<" ";
                    cin>>user;
                    cout<<"Introduzca su contraseña: "<<client.getPassword()<<endl;
                    cout<<" ";
                    cin>>password;
                    cout<<"Ingrese el numero de viajes que ha creado:  "<<client.getViajes()<<endl;
                    cout<<" ";
                    cin>>Viajes;
                    cout<<"Total de viajes cancelados: "<<client.getViajesCancelados()<<Viajes-1<<endl;
                    cout<<"Acceso a promocion del 50 por ciento de descuento en todo el año"<<client.getAccesoPromociones()<<endl;
                    break;
    
                }
                else if(respuesta=="2")
                {

                    cout<<"REGISTRESE AQUI"<<endl;
                    cout <<"Introduzca su primer nombre y primer apellido (separado por comas): "<<endl;
                    cout<<" ";
                    cin>>name;
                    cout <<"Introduzca un ID de usuario: "<<endl;
                    cout<<" ";
                    cin>>user;
                    cout<<"Ingrese una contraseña:" <<endl;
                    cout<<" ";
                    cin>>password;
                    cout<<"Ingrese su numero telefonico(ingrese el numero sin espacios ni lineas): "<<endl;
                    cout<<" ";
                    cin>>tel;
                    cout<<"Su usuario ha sido registrado exitosamente"<<endl;
                }
    }
    else if (opcion ==5)
    {
        cout<<"Hasta luego :)"<<endl;
        sigue = false;
    }
    else
        {
        cout << "Repita su respuesta, por favor"<<endl;
        }
    }
        
    

    }



