/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que lea de la entrada estandar un caracter e indique en la
salida estandar si el caracter es una vocal minuscula, es una vocal mayuscula o
no es una vocal.


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
    else if (c == 'A'|| c == 'E'|| c == 'I' || c == 'O'||c == 'U')
            cout<<"El caracter si es un vocal Mayuscula"<<endl;
        else
            cout<<"El caracter NO es una vocal minuscula"<<endl;

}
