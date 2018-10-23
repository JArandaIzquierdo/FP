/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que lea de la entrada estandar tres numeros. Despues debe
leer un cuarto numero e indicar si el numero coincide con alguno de los
introducidos con anterioridad. Utiliza una unica instruccion if con una
expresion logica compuesta.


*/
#include <iostream>
using namespace std;
int main(){

    int n1,n2,n3,n4;

    cout<<"Introduzca un numero: ";
    cin>>n1;

    cout<<"Introduzca otro numero: ";
    cin>>n2;

    cout<<"Introduzca otro numero: ";
    cin>>n3;

    cout<<"Introduzca el ultimo numero: ";
    cin>>n4;

    if(n1==n4 || n2==n4 || n3==n4)
        cout<<"Uno de los numeros introducidos coincide con el ultimo"<<endl;
    else
        cout<<"Ninguno de los numeros introducidos coincide con el ultimo numero"<<endl;
}
