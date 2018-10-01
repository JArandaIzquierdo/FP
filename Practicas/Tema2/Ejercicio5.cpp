/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un fragmento de programa que intercambie los valores de dos variables.
Sugerencia: apoyese en una variable auxiliar.
*/

#include <iostream>
using namespace std;
int main(){

    int x,y,aux;

    cout<< "Introduzca 2 numero"<<endl;
    cin>>x>>y;

    cout<<"Primer numero: "<<x<<endl;
    cout<<"Segundo numero: "<<y<<endl;

    aux=x;
    x=y;
    y=aux;

    cout<<"El nuevo valor del primer numero es: "<<x<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<y<<endl;
}
