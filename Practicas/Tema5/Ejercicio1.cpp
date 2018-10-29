/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escribe un programa que lea de la entrada estandar una serie de numeros,
almacenando los en un vector.Una vez rellenado el vector con los numeros
leıdos, muestre en la salida estandar los numeros del vector con sus ındices
asociados.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    const int TAM=20;
    int tam, v[TAM];


    do {
        cout<<"El vector tiene que tener "<< TAM <<" datos como maximo: ";
        cin>>tam;

    } while (tam < 1 || tam > TAM);

    for (int i=0;i<tam;i++){

        cout<<"Introduzca un numero: ";
        cin>>v[i];
    }

    cout<< "v = { ";

    for (int i=0;i<tam;i++){
        cout<< v[i]<<"  ";
    }
    cout<<"}"<<endl;

    }
