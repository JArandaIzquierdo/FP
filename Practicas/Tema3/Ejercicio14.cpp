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

    double i,j,salida, salida2;
    char c;

    cout<<"Introduzca el primer numero: ";
    cin>>i;

    cout<<"Introduzca otro numero: ";
    cin>>j;

    cout<<"Introduzca la operaracion: ";
    cin>>c;

    if(c=='+')
        cout<<"Suma: "<< i+j<<endl;
    if(c=='-')
        cout<<"Resta: "<< i-j<<endl;;
    if(c == 'x'|| c == '*')
        cout<<"Multiplicacion: "<<i*j<<endl;;
    if(c == '/')
        cout<<"Division: "<<i/j<<endl;;

    //Hacemos el mismo proceso pero con un switch

    switch (c) {
        case '+':
            cout<<"Suma: "<< i+j<<endl;
            break;
        case '-':
            cout<<"Resta: "<< i-j<<endl;
            break;
        case '*':
            cout<<"Multiplicacion: "<< i*j<<endl;
            break;
        case 'x':
            cout<<"Multiplicacion: "<< i*j<<endl;
            break;
        case '/':
            cout<<"Division: "<<i/j<<endl;
            break;
    }


}
