/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Cuando se compra una cajetilla de tabaco en una maquina y no se introduce el
importe exacto,la maquina utiliza un programa para devolver el mınimo numero de
monedas. Escriba un programa considerando unicamente monedas de 1, 5, 10, 20 y 50
centimos de euro que lea de la entrada estandar el importe de una cajetilla de
tabaco y la cantidad de dinero introducida por el comprador en la maquina y
escriba en la salida estandar la monedas devueltas por la maquina.
Nota: trabaja con centimos en lugar de euros para que los caculos sean mas
sencillos.
*/

#include <iostream>
using namespace std;
int main(){

    int monedasDe1, monedasDe5, monedasDe10, monedasDe20, monedasDe50;
    int importePorPagar, dineroIngresado, vuelta;

    cout<<"Introduzca el importe en centimos de la cajetilla de tabaco: "<< endl;
    cin>>importePorPagar;

    cout<<"Introduzca la cantidad de dinero aportada en centimos por el comprador: "<< endl;
    cin>>dineroIngresado;

    vuelta = dineroIngresado - importePorPagar;
    cout<<"Dinero a devolver: "<<vuelta<<endl;

    monedasDe50 = vuelta /50;
    vuelta = vuelta % 50;

    monedasDe20 = vuelta / 20;
    vuelta = vuelta % 20;

    monedasDe10 = vuelta / 10;
    vuelta = vuelta % 10;

    monedasDe5 = vuelta / 5;
    vuelta = vuelta % 5;

    monedasDe1 = vuelta / 1;
    vuelta = vuelta % 1;

    cout<<"El numero de monedas a devolver es: "<< endl;
    cout<<"Monedas de 50: "<<monedasDe50<<endl;
    cout<<"Monedas de 20: "<<monedasDe20<<endl;
    cout<<"Monedas de 10: "<<monedasDe10<<endl;
    cout<<"Monedas de 5: "<<monedasDe5<<endl;
    cout<<"Monedas de 1: "<<monedasDe1<<endl;

}
