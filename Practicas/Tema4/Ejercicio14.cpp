/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escribe un programa que lea un numero entero no negativo n y dibuje un
triangulo rectangulo con base y altura n como el que se muestra a continuacion
para n = 4 — observa que debe aparecer un espacio entre cada asterisco situado
en la misma lınea:
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n;

    cout<<"Introduzca un numero: ";
    cin>>n;

    for(int i=1; i<=n; i++){

        for(int j=0; j<i;j++)
            cout<<"* ";
        cout<<endl;
    }
}
