/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que lea de la entrada estandar un caracter e indique en la
salida estandar si el caracter es una vocal minuscula o no.


*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    char c;

    cout<<"Introduzca un caracter: ";
    cin>>c;

    if(c == 'a'|| c == 'e'|| c == 'i' || c == 'o'||c == 'u')
        cout<<"El caracter si es una vocal minuscucla"<<endl;
    else
        cout<<"El caracter NO es una vocal minuscula"<<endl;

}
