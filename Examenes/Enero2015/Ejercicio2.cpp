#include <iostream>
using namespace std;

const int FIL=100;
const int COL=100;

void calcularSubmatriz(int matriz[][COL],int filas, int columnas, int subMatriz[][COL],int &tamFil, int &tamCol){

  //Primero recorremos la matriz por filas para buscar la fila que es 0
  //indiceFila guarda el indice de la fila de 0 encontrada
  int indiceFila;
  //Inicializamos el bool a true, en el momento que encontremos un elemento distinto de 0 en la fila, lo ponemos a false
  bool filaEncontrada=true;

  for(int i=0;i<filas;i++){
    filaEncontrada=true;
    for(int j=0;j<columnas;j++){
      //Si encontramos un elemento en la fila que es distinto a 0, ponemos filaEncontrada a false
      if(matriz[i][j]!=0)
        filaEncontrada=false;
    }
    //Si encontramos la fila entera de 0, guardamos el indice de la fila
    if(filaEncontrada)
      indiceFila=i;
  }

  //Despues recorremos la matriz por columnas para buscar la columna que es 0
  //indiceColumna guarda el indice de la fila de 0 encontrada
  int indiceColumna;
  //Inicializamos el bool a true, en el momento que encontremos un elemento distinto de 0 en la fila, lo ponemos a false
  bool columnaEncontrada=true;

  for(int i=0;i<columnas;i++){
    columnaEncontrada=true;
    for(int j=0;j<filas;j++){
      //Si encontramos un elemento en la fila que es distinto a 0, ponemos filaEncontrada a false
      if(matriz[j][i]!=0)
        columnaEncontrada=false;
    }
    //Si encontramos la fila entera de 0, guardamos el indice de la fila
    if(columnaEncontrada)
      indiceColumna=i;
  }
  //Sumamos 1 a cada indice, que sera donde empiece la sub matriz debajo de la filas de ceros
  indiceFila++;
  indiceColumna++;

  //Recorremos la matriz dada pero solo desde la submatriz
  for(int i=indiceFila;i<filas;i++){
    tamCol=0;
    for(int j=indiceColumna;j<columnas;j++){
      subMatriz[tamFil][tamCol]=matriz[i][j];
      tamCol++;
    }
    tamFil++;
  }
}

int main(){

  const int FILA=5;
  const int COLUMNA=4;

  int m[FIL][COL]={{5,0,2,1},{3,0,-5,8},{0,0,0,0},{1,0,1,0},{7,0,5,-4}};
  int subMatriz[FIL][COL];

  //Tamaño de la subMatriz
  int tamFil=0, tamCol=0;

  calcularSubmatriz(m,FILA, COLUMNA, subMatriz, tamFil,tamCol);

  cout<<"El tamañano de la matriz es: "<< tamFil<<" x "<< tamCol<<endl;

  for(int i=0;i<tamFil;i++){
    for(int j=0;j<tamCol;j++){
      cout<<subMatriz[i][j]<<" ";
    }
    cout<<endl;
  }

}
