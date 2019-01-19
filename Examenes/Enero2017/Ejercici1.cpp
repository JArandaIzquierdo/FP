#include <iostream>
using namespace std;

const int TAM=50;

struct secuencia{
  int indice;
  int nNumeros;
};

void crearSubsecuencias(int v[], int tamV, secuencia vSecuencias[],int &tamVSecuencias ){
  //Cogemos el primer numero como el numero anterior
  int numeroAnterior=v[0];
  //Decimos que la primera secuencia empieza en el primer numero del vector
  vSecuencias[tamVSecuencias].indice = 0;
  //Inicialmente el numero de numero consecutivos sera 1
  vSecuencias[tamVSecuencias].nNumeros=1;

  for(int i=1; i<tamV;i++){
    //Si el numero es menor que numero anterior...
    if(v[i]< numeroAnterior){
      //Añadimos 1 al numero de secuencias encontradas
      tamVSecuencias++;
      //Decimos que la nueva secuencia empieza en i
      vSecuencias[tamVSecuencias].indice=i;
      //Y el numero consecutivo de esa secuencia es 0
      vSecuencias[tamVSecuencias].nNumeros=0;
    }
    //Añadimos un numero a la secuencia de numero consecutivos
    vSecuencias[tamVSecuencias].nNumeros++;
    //Cambiamos el valor del numero anterior por el actual
    numeroAnterior = v[i];
  }
  //Sumamos uno al tamaño de secuencias porque al principio es 0,y debe de ser 1, pero lo utilizamos de indice del vector 
  tamVSecuencias++;
}


int main(){
  //Vector dado de ejemplo
  int v[9]={1,1,4,2,5,8,6,3,9};

  //Vector de secuencias que tenemos que mostrar y su tamaño
  secuencia vSecuencias[TAM];
  int tamVSecuencias=0;

  //Llamaos a la funcion que rellena el vector de secuencias
  crearSubsecuencias(v,9,vSecuencias,tamVSecuencias);

  //Recorremos el vector de subsecuencias
  for(int i=0;i<tamVSecuencias;i++){
    //mostramos los valosres del vector v que corresponden con cada subsecuecia
    for(int j=vSecuencias[i].indice; j<vSecuencias[i].indice + vSecuencias[i].nNumeros;j++){

      cout<<v[j]<<" ";

    }
    cout<<endl;
  }
}
