#include <iostream>
using namespace std;

const int numeroFilas = 10;
const int numeroColumnas = 10;

//Funcion que inicializa la matriz sala a todos los asientos Libres
void inicializarSala (char salaCine[][numeroColumnas]){
  for(int i=0; i<numeroFilas; i++){
    for(int j=0;j<numeroColumnas;j++){
      salaCine[i][j]='L';
    }
  }
}

//Funcion que muestra la ocupacion de la sala
void mostrarOcupacion(char salaCine[][numeroColumnas]){
  for(int i=0; i<numeroFilas;i++){
    cout<<i<<" : ";
    for (int j=0; j<numeroColumnas; j++){
      cout<<" "<<salaCine[i][j];
    }
    cout<<endl;
  }
}

//Funcion que muestra cuantos asientos libres hay en la sala
void numeroAsientosLibres (char salaCine[][numeroColumnas]){
  int contador=0;
  for(int i=0; i<numeroFilas; i++){
    for(int j=0; j<numeroColumnas;j++){
      if(salaCine[i][j]== 'L')
        contador++;
    }
  }
  cout<<"El numero de asientos libres es: "<< contador<<endl;
}

//Funcion que devulve el las filas en las que hay un numero de asientos libres n dado
void comprobarNAsientosLibres (char salaCine[][numeroColumnas], int numero, int filasConNAsientosLibres[],int& contadorVectorFilasLibres){

  int contador; //Cuenta el numero de asientos libres que hay en cada fila
  int posicionVector=-1;//Indice de la posicion del vector que guarda las finlas con mas de n asientos libres


  for(int i=0;i<numeroFilas;i++){
    contador=0;
    for(int j=0; j<numeroColumnas;j++){
      if(salaCine[i][j]=='L')
        contador++;
    }
    if(contador>=numero){
      posicionVector++;
      filasConNAsientosLibres[posicionVector]=i;
    }
  }
}

//Funcion que utilizamos para reservar n asientos en una fila dada


int main(){

char salaCine[numeroFilas][numeroColumnas];//matriz que representa una sala de cine
const int TAM=10; //Tamanio del vector que almacena el numero de la fila
int filasConNAsientosLibres[TAM];
int n=4; //numero de asientos libres que necesitamos en una fila

inicializarSala(salaCine);
mostrarOcupacion(salaCine);
numeroAsientosLibres(salaCine);

comprobarNAsientosLibres(salaCine, n,filasConNAsientosLibres);
cout<<"Las filas que tienen "<<n<<" asientos libres o mas son: ";
for(int i=0; i<p+1; i++){
  cout<<filasConNAsientosLibres[i]<<", ";
}
cout<<endl;
reservarNAsientos(salaCine,numeroDeFila,n);

}
