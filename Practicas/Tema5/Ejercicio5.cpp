/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Desarrolle un programa que inicie un vector de enteros con valores leıdos de
la entrada estandar y, a continuacion, calcule el mayor elemento del vector.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    const int TAM=20;
    int tam, v[TAM];
    int mayor;

    do {
        cout<<"El vector tiene que tener "<< TAM <<" datos como maximo: ";
        cin>>tam;}

    while (tam < 1 || tam > TAM);

    cout<<"Introduzca un numero: ";
    cin>>v[0];

    mayor = v[0];

    for (int i=1;i<tam;i++){

        cout<<"Introduzca un numero: ";
        cin>>v[i];

        if(v[i]>mayor)
            mayor = v[i];
    }

    cout<< "El mayor de los numeros introducidos es: "<<mayor<<endl;
}
