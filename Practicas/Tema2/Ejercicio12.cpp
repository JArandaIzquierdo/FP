/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen


Escriba un programa que calcule la desviacion estandar de cinco numeros.

*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

double desviacion, n1, n2, n3, n4, n5, media, distancia1, distancia2, distancia3, distancia4,
distancia5;

const int n = 5;

cout<<"Introduce el primer numero: ";
cin>>n1;

cout<<"Introduce el segundo numero: ";
cin>>n2;

cout<<"Introduce el tercer numero: ";
cin>>n3;

cout<<"Introduce el cuarto numero: ";
cin>>n4;

cout<<"Introduce el quinto numero: ";
cin>>n5;

media = (n1+n2+n3+n4+n5) / n;

cout<< "Media: "<<media<< endl;

distancia1 = pow(abs(n1-media),2);
cout<< "Distancia 1: "<<distancia1<<endl;

distancia2 = pow(abs(n2-media),2);
distancia3 = pow(abs(n3-media),2);
distancia4 = pow(abs(n4-media),2);
distancia5 = pow(abs(n5-media),2);

desviacion = sqrt((distancia1+distancia2+distancia3+distancia4+distancia5)/n);

cout<<"La desviacion estandar es: "<< desviacion << endl;

}
