/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

Para cada uno de los siguientes apartados escriba un programa que calcule el
valor de la suma o el producto expresado:

(a) 􏰁ni=1i=1+2+3+...+n
(b) 􏰁ni=12i−1=1+3+5+...+2n−1
(c) 􏰂ni=1i=1∗2∗3∗...∗n
(d) 􏰁ni=1i!=1!+2!+3!+...+n!
(e) 􏰁ni=1 2i = 21 +22 +23 +...+2n
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n,a=0,b=0,c=1,d=0,e=0;

    cout<<"Introduzca un numero entero: ";
    cin>>n;

    //(a) 􏰁ni=1i=1+2+3+...+n
    for(int i=1; i<=n; i++){
        a=a+i;
    }
    cout<<"a) "<<a<<endl;

    //(b) 􏰁ni=12i−1=1+3+5+...+2n−1
    for(int i=0;i<=n;i++)
        b=b+((2*i)-1);

    cout<<"b) "<<b<<endl;

    //(c) 􏰂ni=1i=1∗2∗3∗...∗n
    for(int i=1; i<=n; i++)
        c=c*i;

    cout<<"c) "<<c<<endl;

    //(d) 􏰁ni=1i!=1!+2!+3!+...+n!
    for(int i=1;i<=n;i++){
        int factorial=1;
        for(int j=i;j>1;j--){
            factorial = factorial *j;
        }
        d=d+factorial;
    }
    cout<<"d) "<<d<<endl;

    //(e) 􏰁ni=1 2i = 21 +22 +23 +...+2n
    for(int i=1;i<=n;i++)
        e = e + pow(2,i);

    cout<<"e) "<<e<<endl;

}
