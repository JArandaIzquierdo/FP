/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Los reglamentos de pesca imponen un lımite a la cantidad total de kilos
permitida en un dıa de pesca. Disenie un programa que, en primer lugar, lea
el lımite diario — en kilos. A continuacion el programa debe leer los pesos de
las presas segun el orden en que se pescaron — un valor de cero indica el
final de las presas. El programa debe mostrar tras cada presa introducida el
peso total acumulado. Si en un momento dado se excede la cantidad total de
kilos permitida, entonces el programa debe mostrar un mensaje indicativo y
terminar.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int limite, peso, pesoTotal;

    cout<<"Introduce el limite de kg: ";
    cin>>limite;

    cout<<"Introduce el peso de la primera presa: ";
    cin>>peso;

    while(peso!=0 && pesoTotal<limite){
        pesoTotal = pesoTotal + peso;

        cout<<"Introduzca el peso de otra presa: ";
        cin>>peso;
    }
    if(pesoTotal>limite)
        cout<<"El peso de las presas a excedido el limite"<<endl;
    cout<<"El preso total de las presas es: "<<pesoTotal<<endl;

}
