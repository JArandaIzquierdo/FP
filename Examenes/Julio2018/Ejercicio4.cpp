/*
Un profesor almacena a sus alumnos en un vector de estructuras. Cada estructura
 representa a un alumno y tiene 4 campos: el nombre del alumno y la nota que ha
 sacado en cada uno de los 3 exámenes de evaluación continua. Define la
 estructura y escribe una función que dado un vector de alumnos devuelva
 un vector con los nombres de los alumnos cuya nota en los tres exámenes
 de evaluación es superior a la nota media de cada examen. Es decir, la nota
 del primer examen debe ser superior a la nota media del primer examen, la nota
 del segundo examen debe ser superior a la nota media del segundo examen, y lo
 mismo para el tercer examen.
*/
#include <iostream>
using namespace std;

const int TAM=4;

struct alumno{
  string nombre;
  double nota1;
  double nota2;
  double nota3;
};


void comprobarAlumnos(const alumno alumnos[],int TAM, string alumnosAprobados[], int &tvaA){

  double notaMedia1=0;
  double notaMedia2=0;
  double notaMedia3=0;

  for(int i=0;i<TAM;i++){
    notaMedia1=notaMedia1+ alumnos[i].nota1;
    notaMedia2=notaMedia1+ alumnos[i].nota2;
    notaMedia3=notaMedia1+ alumnos[i].nota3;
  }


  notaMedia1 = notaMedia1/TAM;
  notaMedia2 = notaMedia2/TAM;
  notaMedia3 = notaMedia3/TAM;

  cout<<"La nota media del exam 1 es: "<<notaMedia1<<endl;
  cout<<"La nota media del exam 2 es: "<<notaMedia2<<endl;
  cout<<"La nota media del exam 3 es: "<<notaMedia3<<endl;

  int contador=-1;
  for(int i=0; i<TAM;i++){
    if(notaMedia1 < alumnos[i].nota1)
      if(notaMedia2 < alumnos[i].nota2)
        if(notaMedia3 < alumnos[i].nota3){
          contador++;
          alumnosAprobados[contador]=alumnos[i].nombre;
        }
  tvaA=contador+1;
  }
}


int main(){

  int tvaA;

  alumno alumnos[TAM]={{"Javi",2,4,6},{"Pepe",6,8,5},{"Juan",10,10,10},{"Antonio",2,6,9}};
  string alumnosAprobados[TAM];

  comprobarAlumnos(alumnos, TAM,alumnosAprobados, tvaA);

  cout<<"Los alumnos cuya nota en los 3 examenes es mayor que la media son: ";
  for(int i=0;i<tvaA;i++){
    cout<<alumnosAprobados[i]<<", ";
  }
  cout<<endl;


}
