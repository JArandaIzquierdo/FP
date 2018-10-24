/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Realice un programa que lea de la entrada estandar 10 numeros e indique en la
salida estandar si el numero cero estaba entre los numeros leıdos.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n;
    bool estaCero=false;

    for(int i=0;i<10;i++){

        cout<<"Introduzca un numero: ";
        cin>>n;
        if(n==0)
            estaCero= true;
    }
    if(estaCero)
        cout<<"El numero 0 si estaba en la lista de nuemros"<<endl;
}
