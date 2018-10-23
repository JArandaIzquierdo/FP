/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que solicite una edad (un entero) e indique en la salida
estandar si la edad introducida esta en el rango [18, 25].


*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int edad;

    cout<<"Introduzca una edad: ";
    cin>>edad;

    if(edad>= 18 && edad<=25)
        cout<<"El numero "<<edad<<" esta entre 18 y 25"<<endl;
    else
        cout<<"El numero "<<edad<<" NO esta entre 18 y 25"<<endl;
}
