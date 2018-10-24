/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que calcule xy, donde tanto x como y son enteros positivos,
sin utilizar la funcion pow.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int x,y,xInicial;

    cout<<"Introduzca el numero x: ";
    cin>>x;

    cout<<"Introduzca el numero y: ";
    cin>>y;

    xInicial = x;

    for(int i=1; i<y;i++){
        x=x*xInicial;
    }

    cout<<xInicial<<" elevado a "<<y<<" = "<<x<<endl;

}
