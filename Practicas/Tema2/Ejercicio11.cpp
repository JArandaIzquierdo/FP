/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen


Suponiendo que el recibo de la luz sube un 3% cada anio, realice un programa
que solicite una factura de este anio y una cantidad de anios y muestre en la
salida estandar cuanto valdrıa la factura dentro del numero de anios introducidos.

*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

double factura;
int anios;
const double TRESPORCIENTO = 0.03;

cout<<"Introduzca el precio de la factura actual: ";
cin>>factura;

cout<< "Introduzca el numero de anios: ";
cin>> anios;

cout<< "La factura despues de "<< anios << " es de: "<< factura *(pow(1.03,anios))<<endl;

}
