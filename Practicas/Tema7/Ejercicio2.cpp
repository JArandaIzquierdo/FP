/*Escriba una funcion que tome como parametros dos punteros a datos del mismo
tipo e intercambie el contenido de las zonas de memoria a las que apuntan los
punteros. Es decir, la funcion debe intercambiar a sus dos parametros recibidos
por referencia mediante sintaxis de paso de punteros.*/

#include <iostream>
using namespace std;

void intercambiar(int* x, int* y){
  int aux = *x;
  *x = *y;
  *y = aux;
}

int main(){
  int x=10,y=20;
  cout<<"La variable x es: "<<x<<endl;
  cout<<"La variable y es: "<<y<<endl;
  intercambiar(&x, &y);
  cout<<"Despues del intercambio:"<<endl;
  cout<<"La variable x es: "<<x<<endl;
  cout<<"La variable y es: "<<y<<endl;

}
