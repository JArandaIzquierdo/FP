/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Realice un programa que calcule y muestre en la salida estandar la suma de los
cuadrados de los numeros enteros del 1 al 10. La solucion es 385
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int total=0;

    for(int i=1;i<=10;i++){
        total= total + (pow(i,2));
        cout<<total<<endl;
    }
}
