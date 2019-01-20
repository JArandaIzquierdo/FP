#include <iostream>
using namespace std;


void juntarVectores(int v1[],int tamV1, int v2[], int tamV2, int vOrdenado[], int &tamOrdenado){

  //Creamos un nuevo vector que tendra todos los elementos de los 2 vectores
  int vectorTotal[tamV1+tamV2];
  //Variable para controlar el tamaño del vector
  int tamVTotal=0;

  //Metemos el primer vector en el vector total
  for(int i=0;i<tamV1;i++){
    vectorTotal[tamVTotal]=v1[i];
    tamVTotal++;
  }
  //Metemos el segundo vector en el vector total
  for(int i=0;i<tamV2;i++){
    vectorTotal[tamVTotal]=v2[i];
    tamVTotal++;
  }
  //Muestro el vector total para comprobar que esta bien (no es necesario mostrarlo)
  for(int i=0;i<tamVTotal;i++){
    cout<<vectorTotal[i]<<" ";;
  }
  cout<<endl;

  //Dejamos el vectorOrdenado solo los que no estan repetidos
  //Cogemos el primer elemento del vectorTotal, y lo copiamos al vector sin repetidos
  vOrdenado[tamOrdenado]=vectorTotal[0];
  //Incremetamos el tamañana del vector Ordenado en 1
  tamOrdenado++;

  //La variable repetido controla si el elemento que queremos insentar esta ya o no en el vectorOrdenado
  bool repetido=false;

  for(int i=0;i<tamVTotal;i++){
    repetido=false;
    for(int j=0;j<tamOrdenado;j++){
      if(vectorTotal[i]==vOrdenado[j])
        repetido=true;

    }
    //Si el elemento i no esta repetido, lo añado al vector Ordenado
    if(repetido==false){
      vOrdenado[tamOrdenado]=vectorTotal[i];
      tamOrdenado++;
    }
  }

  /*Una vez que ya tenemos todos los elementos no repetidos en el vectorOrdenado,
  pasamos a ordenar sus elementos de menor a mayor */

  int aux=0;

  for(int i=0;i<tamOrdenado-1;i++){
    for(int j=i+1;j<tamOrdenado;j++){
      if(vOrdenado[j]<vOrdenado[i]){
        aux=vOrdenado[i];
        vOrdenado[i]=vOrdenado[j];
        vOrdenado[j]=aux;
      }
    }
  }

}



int main(){

  const int TAMV1=4;
  const int TAMV2=5;
  const int TAMORDE=TAMV1+TAMV2;

  int v1[TAMV1]={1,1,1,1};
  int v2[TAMV2]={1,1,1,1,1};
  int vOrdenado[TAMORDE];

  int tamOrdenado=0;

  juntarVectores(v1,TAMV1,v2, TAMV2,vOrdenado,tamOrdenado);

  cout<<"{";
  for(int i=0;i<tamOrdenado;i++){
    cout<<vOrdenado[i]<<" ";
  }
  cout<<"}"<<endl;

}
