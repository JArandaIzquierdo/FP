/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen


Realice un programa que calcule el valor que toma la siguiente funcion para unos
valores dados de x e y:  sqrt(x) / (pow(y,2) - 1);
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    double solucion, x,y;

    cout<<"Inserte el valor de x: ";
    cin>>x;

    cout<<"Inserte el valor de y: ";
    cin>>y;

    solucion = sqrt(x) / (pow(y,2) - 1);

    cout<<"La solucion de la funcion es: "<<solucion<<endl;
}
