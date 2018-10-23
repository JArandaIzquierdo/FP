/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen




*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

    double a=2,b=1,c=-1,d=4;
    double expresion1, expresion2, expresion3, expresion4, expresion5;

    expresion1 = (a/b)+1;
    expresion2 = (a+b)/(c+d);
    // expresion3 = (a+(b/c));
    expresion4 = a +(b/(c-d));
    expresion5 = (a+b)*(c/d);

    cout<< "El resultado de las expresiones son: "<<endl;

    cout<< "Expresion 1: "<< expresion1<<endl;

    cout<<"Expresion 2: "<< expresion2 << endl;

    cout<<"Expresion 4: "<< expresion4 << endl;

    cout<<"Expresion 5: "<< expresion5 << endl;

}
