#include <iostream>
using namespace std;

struct alumno{
  string nombre;
  double nota1;
  double nota2;
  double nota3;
};


void funcionNotaMedia(alumno vectorAlumnos[],int tamVecAlum, string vectorAlumnosAprovados[],int &tamAprovados){

  int media1=0, media2=0, media3=0;

  for(int i=0;i<tamVecAlum;i++){
    media1=media1+vectorAlumnos[i].nota1;
    media2=media2+vectorAlumnos[i].nota2;
    media3=media3+vectorAlumnos[i].nota3;

}
media1= media1/tamVecAlum;
media2=media2/tamVecAlum;
media3=media3=tamVecAlum;


tamAprovados=0;
for(int i=0;i<tamVecAlum;i++){
  if(vectorAlumnos[i].nota1>media1 && vectorAlumnos[i].nota2>media2 && vectorAlumnos[i].nota3>media3){
    vectorAlumnosAprovados[tamAprovados]=vectorAlumnos[i].nombre;
    tamAprovados++;
  }
}
}

int main(){

  const int TAM=50;
  string vectorAlumnosAprovados[TAM];
  int tamAprovados=0;

  alumno vectorAlumnos[3]={{"Pepe",4,6,8},{"Antonio",10,4,6},{"Juan",10,10,10}};

  funcionNotaMedia(vectorAlumnos,3,vectorAlumnosAprovados,tamAprovados);

  cout<<"Los alumnos aprovados son: "<<endl;
  for(int i=0;i<tamAprovados;i++){
    cout<<vectorAlumnosAprovados[i]<<", ";
  }
  cout<<endl;
}
