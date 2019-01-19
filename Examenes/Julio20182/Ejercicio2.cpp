#include <iostream>
using namespace std;

const int FIL=5;
const int COL=10;

void cambiarMatriz(int matriz[][COL], int fil, int col){

  for(int i=0; i<fil; i++){
    int aux=0;
    int n=0;
    for(int j=col-1;j>col/2;j--){
      aux=matriz[i][n];
      matriz[i][n]=matriz[i][j];
      matriz[i][j]=aux;
      n++;
    }
  }
}



int main(){

  int matriz[FIL][COL]={{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},
  {1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10}};

   // int matriz[FIL][COL]={{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9},
   // {1,2,3,4,5,6,7,8,9},{1,2,3,4,5,6,7,8,9}};

  for(int i=0;i<FIL;i++){
    for(int j=0;j<COL;j++){
      cout<<matriz[i][j]<<" ";
      }
      cout<<endl;
    }

    cout<<"--------------------------"<<endl;

  cambiarMatriz(matriz, FIL, COL);

  for(int i=0;i<FIL;i++){
    for(int j=0;j<COL;j++){
      cout<<matriz[i][j]<<" ";
      }
      cout<<endl;
    }
}
