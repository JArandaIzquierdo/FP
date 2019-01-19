#include <iostream>
using namespace std;

void ordenarVector(int v[], int tamV){

  int i = 0, aux, pos;
  while (i < tamV){
    //buscamos todos los iguales a cada elemento
    pos = i+1;
    for (int j = i+1; j < tamV; j++){
      if (v[i] == v[j]){ // si son iguales los agrupa
        aux = v[pos];
        v[pos] = v[j];
        v[j] = aux;
        pos ++;
      }
    }
    int nduplicados = pos - (i+1)+1;
    i = i + nduplicados;
  }
}


int main(){

  const int TAM=8;

  int v[TAM]={1,3,1,2,2,3,4,1};

  ordenarVector(v,TAM);

  for(int i=0;i<TAM;i++){

    cout<<v[i]<<", ";
  }
  cout<<endl;

}
