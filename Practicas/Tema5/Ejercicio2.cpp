/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen


Escribe un programa que defina un vector de numeros y muestre en la salida
estandar el vector en orden inverso del ultimo al primer elemento. Nota:
tendras que generar los ındices en orden inverso para resolver el ejercicio.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    const int TAM=20;
    int tam, v[TAM];
    int indice;

    do {
        cout<<"El vector tiene que tener "<< TAM <<" datos como maximo: ";
        cin>>tam;

    } while (tam < 1 || tam > TAM);

    for (int i=0;i<tam;i++){

        cout<<"Introduzca un numero: ";
        cin>>v[i];
        indice = i;
    }

    cout<< "v = { ";

    for (int i=indice;i>=0;i--){
        cout<< v[i]<<"  ";
    }
    cout<<"}"<<endl;

    }
