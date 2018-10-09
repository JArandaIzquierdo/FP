/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que lea de la entrada estandar los dos catetos de un
triangulo rectangulo y escriba en la salida estandar su hipotenusa.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    double solucion, x,y;

    cout<<"Inserte el valor de x: ";
    cin>>x;

    cout<<"Inserte el valor de y: ";
    cin>>y;

    solucion = sqrt(x) / (pow(y,2) - 1);

    cout<<"La solucion de la funcion es: "<<solucion<<endl;
}
