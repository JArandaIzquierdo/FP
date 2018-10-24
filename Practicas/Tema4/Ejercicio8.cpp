/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que lea valores enteros hasta que se introduzca un valor
en el rango [20, 30] o se introduzca el valor 0.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n;

    cout<<"Introduce un numero: "<<endl;
    cin>>n;

    while(n!=0 && !(n>=20 && n<=30)){

        cout<<"Introduce un numero: "<<endl;
        cin>>n;
    }
}
