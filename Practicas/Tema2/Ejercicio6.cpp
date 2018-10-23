/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota
final media de los cuatro alumnos.
*/
#include <iostream>
using namespace std;
int main(){

    double alum1, alum2, alum3, alum4, notaMedia;

    cout<<"Introduce la nota de 4 alumnos para calcular su media: "<<endl;
    cin>>alum1>>alum2>>alum3>>alum4;

    notaMedia= (alum1 + alum2 + alum3 + alum4)/4;

    cout<<"La nota media de los alumnos es: "<<notaMedia<<endl;

}
