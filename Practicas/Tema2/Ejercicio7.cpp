/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que lea de la entrada estandar los dos catetos de un
triangulo rectangulo y escriba en la salida estandar su hipotenusa.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int cateto1, cateto2, hipotenusa;

    cout<<"Introduzca la longitud de los catetor: "<<endl;

    cout<<"Cateto 1: "<<endl;
    cin>>cateto1;

    cout<<"Cateto 2: "<<endl;
    cin>>cateto2;

    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));

    cout<<"La hipotenusa del trialgulo restangulo es: "<<hipotenusa<<endl;


}
