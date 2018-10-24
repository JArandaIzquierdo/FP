/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Realice un programa que lea caracteres de la entrada estandar hasta que se
introduzca el caracter + o -.
Indique si todos los caracteres leıdos — salvo el ultimo que hace de centinela
han sido vocales minusculas.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    char c;
    int areVocales=0;

    cout<<"Introduzca un caracter: ";
    cin>>c;

    while(c!='+' && c!='-'){

        if(c=='a' || c=='e' || c=='i' || c=='o'||c=='u')
            areVocales = true;
        else
            areVocales = false;

        cout<<"Introduzca otro caracter: ";
        cin>>c;

    }
    if(areVocales)
        cout<<"Todos los caracteres introducidos era vocales"<<endl;
    else
        cout<<"NO todos los caracteres eran vocales"<<endl;
}
