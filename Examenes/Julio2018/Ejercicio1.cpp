/*
Se representa un conjunto de enteros como un vector de enteros sin repetidos.
Realiza una función que dados dos conjuntos devuelva un valor lógico indicando
si son iguales. Ten en cuenta que los elementos de un conjunto no están
ordenados. Por lo tanto, los conjuntos {1, 2, 3} y {3, 1, 2} son iguales.
Se supone que los conjuntos que recibe la función son correctos, es decir,
no contienen repetidos.
*/
#include <iostream>
using namespace std;

const int TAM1=3;
const int TAM2=3;

bool sonIguales(int v1[], int tv1, int v2[], int tv2){
  //Si el tamanio de los vectores es diferente, ya sabemos que no son iguales
  if(tv1!=tv2)
    return false;

  bool sonIguales=false;

  for(int i=0;i<tv1;i++){
    sonIguales=false;
    for(int j=0;j<tv2;j++){
      if(v1[i]==v2[j])
        sonIguales=true;
    }
    if(sonIguales==false)
      return false;
  }
  return true;
}

int main(){

int v1[TAM1]={1,2,4};
int v2[TAM2]={3,2,1};

bool vectoresIguales=sonIguales(v1,TAM1,v2,TAM2);

if(vectoresIguales)
  cout<<"Los vectores son iguales"<<endl;
else
  cout<<"Los vectores no son iguales"<<endl;
}
