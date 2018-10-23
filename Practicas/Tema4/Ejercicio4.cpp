/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Realice un programa que solicite de la entrada estandar un entero del 1 al 10
y muestre en la salida estandar su tabla de multiplicar.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n;

    cout<<"Introduce un numero: ";
    cin>>n;

    cout<<"La tabla de multiplicar del "<<n<<" es: "<<endl;

    for(int i=0;i<=10;i++){
        cout<<n*i<<endl;
    }
}
