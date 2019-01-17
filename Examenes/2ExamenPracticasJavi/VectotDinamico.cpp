/*
Crear un vector de enteros en memoria dinamica de n elementos y rellenarlo (tod
en el main). Crear una funcion (en la que los parametros sean punteros), y que
devuelva la media de los datos del vector y el valor maximo.
*/

#include<iostream>
using namespace std;

int main(){

  int n;//Numero de elementos que queremos introducir en el vector
  do{
    cout<<"Introduzca el numero de elementos del vector: ";
    cin>>n;
  }
  while (n<=0);
  //Creamos el vector v en memria dinamica
  int* v = new int [n];
  //Introducimos los datos en el vector
  for(int i=0;i<n;i++){
    cout<<"Introduce un valor del vector: ";
    cin>>v[i];
  }
  double* media
  mediaMaximo(v,)



}
