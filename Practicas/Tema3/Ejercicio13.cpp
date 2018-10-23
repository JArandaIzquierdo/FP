/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Realice un programa que lea de la entrada estandar la longitud de los tres lados
de un triangulo y muestre en la salida estandar que tipo de triangulo es, de
acuerdo con la siguiente casuıstica — a denota la longitud del lado mas largo
y b y c denotan la longitud de los otros dos lados:

    • Si a≥b+c, no se trata de un triangulo
    • Si a2 = b2 + c2, es un triangulo rectangulo.
    • Si a2 < b2 + c2, es un triangulo acutangulo
    • Si a2 > b2 + c2, es un triangulo obtusangulo


*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int a,b,c;

    cout<<"Introduzca el lado a: ";
    cin>>a;

    cout<<"Introduzca el lado b: ";
    cin>>b;

    cout<<"Introduzca el lado c: ";
    cin>>c;

    if(a>= (b+c))
        cout<<"No se trata de un triangulo"<<endl;
    else{
        if(pow(a,2) == (pow(b,2)+ pow(c,2)))
            cout<<"Es un triangulo rectangulo"<<endl;

        if(pow(a,2) < (pow(b,2)+ pow(c,2)))
            cout<<"Es un triangulo acutangulo"<<endl;

        if(pow(a,2) > (pow(b,2)+ pow(c,2)))
            cout<<"Es un triangulo obtusangulo"<<endl;
        }
}
