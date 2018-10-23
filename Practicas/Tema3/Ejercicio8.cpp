/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Realice un programa que lea un valor entero y determine si se trata de un numero
par o impar. Sugerencia: un numero es par si el resto de dividirlo entre dos es
cero.

Generalice el programa para que lea dos enteros, n y m, y determine si n
divide a m.


*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n;

    cout<<"Introduzca un numero entero: ";
    cin>>n;

    if ((n%2) == 0)
        cout<<"El numero es par"<<endl;
    else
        cout<< "El numero es impar"<<endl;

    int n1, n2;

    cout<<"Introduzca un numero entero: ";
    cin>>n1;

    cout<<"Introduzca otro numero entero: ";
    cin>>n2;

    if ((n1%n2) == 0)
        cout<<"El numero "<<n1<<" divide al numero "<<n2<<endl;
    else
        cout<<"El numero "<<n1<<" NO divide al numero "<<n2<<endl;

}
