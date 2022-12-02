# TC1033
Ayetza Yunnuen Infante García - A01709011

Proyecto final para la materia TC1033 Programación Orientada a Objetos

Maestro: Benjamín Valdés Aguirre

## Lenguaje Utilizado
Lenguaje C++.

## Contexto

Una Agencia de paqueteria quiere administrar de una manera más optima el envio de los paquetes
por lo que opta utilizar clases para definir mejor la organización de la misma. Los envios 
estan separados por paquetes retenidos y paquetes enviados. La agencia también le importa mucho la 
retroalimentación de los usuarios por lo que la agencia tiene un buzón de denuncias para que los usuarios
manden sus denuncias. Además que existe un apartado para que los clientes vean un resumen de su historial
que esta abierto para que en el futuro tmbién sus empleados lo vean.

## Funcionalidad

El programa consta de un menu interactivo para generar envios, ver interrupción de paquetes,
ver tu historial como cliente o salir. Unicamente se usan métodos para crear objetos y ver 
el resumen de sus datos.

## Consideraciones

El programa corre en consola y esta hecho con c++ standard.

compila con: "g++ Agencia.h Denuncias.h Paquetes.h PaquetesRetenidos.h PaquetesEnvios.h Personas.h Cliente.h main.cpp"


## Correcciones

1.- Se uso un puntero para usar la relación de agregación de Denuncias a Agencia

2.- Se corrigió la herencia en el main ya que se creaban y usaban variables incorrectas para
sus constructores orrespondientes.

3.- Se corrigió el diagrama de clases por sus faltantes atributos en la clase Paquetes

4.- Se corrigieron los contructores de las clases hijas de Paquetes ya que estaban mal hechos.


