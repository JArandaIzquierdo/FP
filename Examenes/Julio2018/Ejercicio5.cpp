/*
Realice una función que dado un vector de enteros devuelva un vector con los
mismos valores del vector original, pero en el que los elementos repetidos del
vector aparezcan en posiciones contiguas (el orden da igual). Por ejemplo,
dado el vector {1, 3, 1, 2, 2, 3, 4, 1} se debería devolver un vector parecido
a {1, 1, 1, 3, 3, 2, 2, 4}, es decir, un vector en que todos los elementos
iguales aparecen en posiciones consecutivas.
*/
#include <iostream>
using namespace std;

const int TAM=8;


void calcularVectorContiguo(int vector[], int TAM,int vectorContiguo[]){

int contador=0;
int repetido;

  for(int i=0;i<TAM;i++){
    repetido=-1;
    for(int j=0;j<TAM;j++){
      if(vector[i]==vector[j]){
        repetido++;
      }
    }
    if(repetido>=1){
        for(int j=0;j<=repetido;j++){
          vectorContiguo[contador]=vector[i];
          contador++;
        }
    }
    else{
      vectorContiguo[contador]=vector[i];
      contador++;
    }
  }
}

int main(){

int vector[TAM]={1,3,1,2,2,3,4,1};
int vectorContiguo[TAM];

cout<<"El vector original es: ";
for(int i=0;i<TAM;i++){
  cout<<vector[i]<<", ";
}
cout<<endl;

calcularVectorContiguo(vector,TAM,vectorContiguo);

cout<<"El vector contiguo es: ";
for(int i=0;i<TAM;i++){
  cout<<vectorContiguo[i]<<", ";
}
cout<<endl;

}
