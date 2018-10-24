/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que tome cada 4 horas la temperatura exterior,leyendola
durante un perıodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la
temperatura media del dıa, la temperatura mas alta y la mas baja.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int temperatura, sumaTemperaturas=0, temMax, temMin;

    cout<<"Introduce una temperatura:";
    cin>>temperatura;

    temMax = temperatura;
    temMin = temperatura;

    for(int i=1; i<6;i++){

        cout<<"Introduce una temperatura:";
        cin>>temperatura;

        sumaTemperaturas = sumaTemperaturas + temperatura;

        if(temMax<temperatura)
            temMax = temperatura;

        if(temMin>temperatura)
            temMin = temperatura;
    }

    cout<<"La media de la temperatura es: "<<sumaTemperaturas/6<<endl;
    cout<<"La temperatura Maxima es: "<<temMax<<endl;
    cout<<"La temperatura minima es: "<<temMin<<endl;
}
