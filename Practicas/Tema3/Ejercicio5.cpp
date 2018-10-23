/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que lea dos numeros y determine cual de ellos es el mayor.


*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n1, n2;

    cout<<"Escribe un numero: ";
    cin>> n1;

    cout<<"Escribe otro numero: ";
    cin>>n2;

    if(n1 == n2)
        cout<<"Los numeros son iguales"<<endl;
    else if(n1<n2){
        cout<< n2 << " es el mayor"<<endl;
    }else
        cout<< n1 << " es el mayor"<<endl;

}
