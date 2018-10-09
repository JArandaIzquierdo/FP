/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen


Escriba un programa que calcule las soluciones de una ecuacion de segundo
 grado de la forma ax2 + bx + c = 0, teniendo en cuenta que:

*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

int a,b,c;
double raiz1, raiz2;

cout<<"Introduzaca el valor de a: ";
cin>>a;

cout<<"Introduzaca el valor de b: ";
cin>>b;

cout<<"Introduzaca el valor de c: ";
cin>>c;

raiz1 = (-b + (sqrt(pow(b,2)-(4*a*c)))) / (2*a);
raiz2 = (-b - (sqrt(pow(b,2)-(4*a*c))) )/ (2*a);

cout<< "La raiz 1 es: "<<raiz1<<endl;
cout<< "La raiz 2 es: "<<raiz2<<endl;


}
