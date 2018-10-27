/*
JAVIER ARANDA IZQUIERO
Fundamentos de Programacion
Grado Ingenieria Informatica
Universidad de Jaen

En una clase de 5 alumnos se han realizado tres examenes y se requiere
determinar el numero de:

(a) Alumnos que aprobaron todos los examenes.
(b) Alumnos que aprobaron al menos un examen.
(c) Alumnos que aprobaron unicamente el ultimo examen.

Realice un programa que permita la lectura de los datos y el calculo de
las estadısticas.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    double nota1, nota2, nota3;
    int aprobadosTodos=0,aprobadoAlmenosUno=0,aprobadoSoloUltimo=0;

    for(int i=1; i<=5; i++){

        cout<<"Estas son las notas de alumno "<<i<<endl;

        cout<<"Introduce la nota del primer examen: ";
        cin>>nota1;

        cout<<"Introduce la nota del segundo examen: ";
        cin>>nota2;

        cout<<"Introduce la nota del tercer examen: ";
        cin>>nota3;

        if(nota1>=5 && nota2>=5 && nota3>=5){
            cout<<"El alumno numero "<<i<<" ha aprobado TODOS los examenes"<<endl;
            aprobadosTodos++;
        }

        if(nota1>=5 || nota2>=5 || nota3>=5){
            cout<<"El alumno numero "<<i<<" ha aprobado ALMENOS un examen"<<endl;
            aprobadoAlmenosUno++;
        }

        if(nota1<5 && nota2<5 && nota3>=5){
            cout<<"El alumno "<<i<<" ha aprobado solo el ULTIMO examen"<<endl;
            aprobadoSoloUltimo++;
        }
    }

    cout<<"El nuemro de alumnos que han aprobado todos los examenes es: "<<aprobadosTodos<<endl;
    cout<<"El nuemro de alumnos que han aprobado almenos un examen es: "<<aprobadoAlmenosUno<<endl;
    cout<<"El nuemro de alumnos que han aprobado solo el ultimo examene es: "<<aprobadoSoloUltimo<<endl;
    }
