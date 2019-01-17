/*
Suma de dos matrices dispersas
*/

#include <iostream>
using namespace std;

struct elemento{
  int fila;
  int columna;
  int valor;
};

int Valor(elemento matriz[],int tamMatriz, int fil, int col){
  for(int i=0; i<tamMatriz; i++){
    if(matriz[i].fila == fil && matriz[i].columna == col)
      return matriz[i].valor;
  }
  return 0;
}

void Suma(elemento matriz1[], int tamMatriz1, elemento matriz2[], int tamMatriz2,
  int fil, int col, elemento matrizSuma[], int &tamMatrizSuma){

  int tamSuma=0;
  for(int i=1; i<=fil;i++){
    for(int j=1; j<=col;j++){
      int suma = Valor(matriz1,tamMatriz1,i,j)+Valor(matriz2,tamMatriz2,i,j);
      if(suma!=0){
        matrizSuma[tamSuma].fila = i;
        matrizSuma[tamSuma].columna = j;
        matrizSuma[tamSuma].valor = suma;

        tamSuma++;
      }
    }
  }
tamMatrizSuma=tamSuma;
}

int main(){
const int FIL=5;
const int COL=5;

elemento matriz1[3] = {{1,1,12},{3,5,7},{5,2,9}};
elemento matriz2[2] = {{1,1,1},{1,4,4}};
elemento matrizSuma[5];

int tamMatrizSuma;
Suma(matriz1, 3, matriz2, 2, FIL, COL, matrizSuma, tamMatrizSuma);

cout<<"{";
for(int i=0;i<tamMatrizSuma;i++){
  cout<<"{"<<matrizSuma[i].fila<<", "<<matrizSuma[i].columna<<", "<<matrizSuma[i].valor<<"}";
}
cout<<"}"<<endl;


}
