/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escribe un programa que defina un vector de numeros y calcule la suma acumulada
de sus elementos. Por ejemplo, si el vector contiene los numeros {1, 3, 2, 7}
su suma acumulada es {1, 4, 6, 13}.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    const int TAM=20;
    int tam, v1[TAM], v2[TAM];
    int sumaAcumulada = 0;

    do {
        cout<<"El vector tiene que tener "<< TAM <<" datos como maximo: ";
        cin>>tam;}

    while (tam < 1 || tam > TAM);


    for (int i=0;i<tam;i++){

        cout<<"Introduzca un numero: ";
        cin>>v1[i];

        sumaAcumulada = sumaAcumulada + v1[i];
        v2[i]=sumaAcumulada;
    }

    cout<<"El vector de suma acumulada es: { ";
    for(int i=0; i<tam; i++){

        cout<< v2[i]<< "  ";
    }
    cout<<"}"<<endl;
}
