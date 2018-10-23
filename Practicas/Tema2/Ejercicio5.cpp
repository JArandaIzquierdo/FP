/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

La calificacion final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que
cuenta un 60% y la nota de participacio ́n que cuenta el 10% restante.
Escriba un programa que lea de la entrada estandar las tres notas de un
alumno y escriba en la salida estandar su nota final.
*/

#include <iostream>
using namespace std;
int main(){


    double notaFinal, notaPracticas, notaTeoria, notaParticipacion;

    cout<< "Introduzca la nota de practicas del alumno: "<< endl;
    cin>>notaPracticas;

    cout<<"Introduzca la nota de teoria del alumno: "<<endl;
    cin>>notaTeoria;

    cout<<"introduzca la nota de participacion del alumno: "<<endl;
    cin>>notaParticipacion;

    notaPracticas = notaPracticas * 0.3;
    notaTeoria = notaTeoria * 0.6;
    notaParticipacion = notaParticipacion * 0.1;

    notaFinal = notaPracticas +  notaTeoria + notaParticipacion;

    cout<< "La nota final del alumno es: "<< notaFinal << endl;
}
