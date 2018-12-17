#include <iostream>
using namespace std;

const int FIL=10;
const int COL=10;


void cambiarMatriz(int matriz[][COL],int FIL,int COL){
  int mayor;
  int menor;
  int aux;
  for(int i=0;i<FIL;i++){
    mayor=9;
    menor=0;
    while(mayor>4 && menor<5){
      aux=matriz[i][mayor];
      matriz[i][mayor]=matriz[i][menor];
      matriz[i][menor]=aux;
      menor++;
      mayor--;

    }
  }
}


int main(){
int matriz[FIL][COL]={{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},
{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},
{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10},
{1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10}};

cout<<"La matriz inicial es: "<<endl;
for(int i=0;i<FIL;i++){
  for(int j=0;j<COL;j++){
    cout<<matriz[i][j]<<" ";
  }
  cout<<endl;
}


cambiarMatriz(matriz,FIL,COL);

cout<<endl;
cout<<"La matriz modificada es: "<<endl;
for(int i=0;i<FIL;i++){
  for(int j=0;j<COL;j++){
    cout<<matriz[i][j]<<" ";
  }
  cout<<endl;
}

}
