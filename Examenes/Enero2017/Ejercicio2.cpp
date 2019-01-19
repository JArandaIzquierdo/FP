#include <iostream>
using namespace std;

const int TAM=1000;
const int FIL=5;
const int COL=5;

void calvectorIndices (bool matriz[][COL], int fil, int col, int vIndices[],int &tamVIndeices){

  tamVIndeices=0;
  //Variable que controla que todos los elementos de una columna sean verdaderos
  bool control;
  //Recorremos la matriz por columnas
  for(int i=0;i<fil;i++){
    //Cada vez que recorremos una columna ponemos el control a true
    control=true;
    for(int j=0;j<col;j++){
      //Si algun elemento de la columna es diferente a true
      if(matriz[j][i]!=true)
        //Indicamos que esa columna no es valida
        control=false;
    }
    //Si todos los valores de esa columna son true
    if(control){
      //Añadimos esa columna al vector de indice
      vIndices[tamVIndeices]=i;
      //incrementamos el numero de elementos del vector
      tamVIndeices++;
    }
  }

}

int main(){

  //Matriz que queremos recorrer por columnas
  bool matriz[FIL][COL]={
    {true, true, true, true, false},
    {true, true, true, true, false},
    {true, true, true, true, false},
    {true, true, true, true, false},
    {false, true, true, true, false}};

  //Cremaos el vector de indices
  int vIndices[TAM];
  //Tamaño del vector de indices
  int tamVIndeices;

  //Llamamos a la funcion que rellena el vector
  calvectorIndices(matriz,FIL,COL,vIndices,tamVIndeices);

  //Mostramos el vector de indices
  for(int i=0;i<tamVIndeices;i++){
    cout<<vIndices[i]<<" ";
  }
  cout<<endl;
}
