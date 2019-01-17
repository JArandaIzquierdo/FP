/*

Dado una matriz de enteros, crear una funcion que devuelva la cifra menor de la
suma de las columnas, y el indice de la columna donde la suma es menor.
*/

#include <iostream>
using namespace std;

const int FIL=2;
const int COL=5;

void sumaIndice (int matriz[][COL],int FIL, int COL, int &suma, int &indice){

  int menor=matriz[0][0]+matriz[1][0];
  for(int i=0; i < COL;i++){
    suma=0;
    for(int j=0;j<FIL;j++){
      suma = suma + matriz[j][i];
    }
    cout<<"La suma de la columna es: "<<suma<<endl;
    if(menor > suma){
      menor = suma;
      indice = i;
    }
    suma=menor;
  }
}


int main(){
//Creamos la matriz
int matriz[FIL][COL]={{1,3,6,10,4},{10,5,7,8,2}};

int suma,indice;

sumaIndice(matriz,FIL, COL,suma, indice);

cout<<"La suma menor es: "<<suma<<endl;
cout<<"El indice donde se encuentra la columna de la suma menor es: "<<indice<<endl;


}
