/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Realice un programa que lea de la entrada estandar numeros hasta que se
introduzca un cero–es decir, es una lectura con centinela donde el centinela
es el valor 0. En ese momento el programa debe terminar y mostrar en la salida
estandar la cantidad de valores mayores que cero leıdos.
*/

#include <iostream>
using namespace std;
int main(){

    int n,contador=0;

    cout<<"Introduce un numero: "<<endl;
    cin>>n;

    while(n!=0){
        if(n>0)
            contador++;
        cin>>n;
    }

    cout<<"Hay "<<contador<<" numeros mayores de 0"<<endl;

}
