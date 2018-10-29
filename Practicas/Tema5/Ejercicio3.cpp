/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen


Escribe un programa que defina un vector de numeros y calcule la suma de sus
elementos.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    const int TAM=20;
    int tam, v[TAM];
    int suma=0;

    do {
        cout<<"El vector tiene que tener "<< TAM <<" datos como maximo: ";
        cin>>tam;

    } while (tam < 1 || tam > TAM);

    for (int i=0;i<tam;i++){

        cout<<"Introduzca un numero: ";
        cin>>v[i];
        suma = suma + v[i];
    }
    cout<< "La suma de todos los numeros es: "<< suma<<endl;

}
