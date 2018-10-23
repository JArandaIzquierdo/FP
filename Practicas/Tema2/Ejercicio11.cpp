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

double facturaInicial, primeraFactura, facturaFinal;
int anios;
const double TRESPORCIENTO = 0.03;

cout<<"Introduzca el precio de la factura actual: ";
cin>>facturaInicial;

cout<< "Introduzca el numero de anios: ";
cin>> anios;

primeraFactura =  facturaInicial + (facturaInicial * TRESPORCIENTO);


cout<< "La primera factura vale: "<<primeraFactura<< endl;
cout<< "La factura despues de "<< anios << " es de: "<< facturaFinal<<endl;

}
