/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Existen muchos metodos numericos capaces de proporcionar aproximaciones al
numero Π. Uno de ellos es el siguiente:

Cree un programa que lea el grado de aproximacion — numero de terminos de la
sumatoria — y devuelva un valor aproximado de Π — con 10 terminos se obtiene
3.04936 y con 100 terminos 3.13208.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int grado;
    double sumatoria=0;

    cout<<"Introduzca el grado: ";
    cin>>grado;

    for(int i=1;i<=grado;i++)
        sumatoria = sumatoria + (6/(pow(i,2)));
        cout<<"Sumatoria: "<<sumatoria<<endl;


    cout<<"La aproximacion al numero PI es: "<<sqrt(sumatoria)<<endl;
}
