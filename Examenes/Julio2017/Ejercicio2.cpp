#include <iostream>
using namespace std;

struct persona{
  string nombre;
  int numero;
};

string comprobacion(persona p1, persona p2, int permutacion[], int tamPermutacion){

  for(int i=0; i<tamPermutacion;i++){
    if(permutacion[i]==p1.numero)
      return p1.nombre;
    if(permutacion[i]==p2.numero)
      return p2.nombre;
  }
}

int main(){

persona p1, p2;

cout<<"Intruduce el nombre de la persona 1: ";
cin>>p1.nombre;

cout<<"Introduce el numero de la persona 1: ";
cin>>p1.numero;

cout<<"Intruduce el nombre de la persona 2: ";
cin>>p2.nombre;

cout<<"Introduce el numero de la persona 2: ";
cin>>p2.numero;

int permutacion[100]=
  {100, 99, 98,97,96,95,94,93,92,91,
  90,89,88,87,86,85,84,83,82,81,
  80,79,78,77,76,75,74,73,72,71,
  70, 69,68,67,66,65,64,63,62,61,
  60,59,58,57,56,55,54,53,52,51,
  50,49,48,47,46,45,44,43,42,41,
  40,39,38,37,36,35,34,33,32,31,
  30,29,28,27,26,25,24,23,22,21,
  20,19,18,17,16,15,14,13,12,11,
  10,9,8,7,6,5,4,3,2,1};

  string ganador= comprobacion (p1,p2,permutacion,100);

  cout<<"El ganador es: "<<ganador<<endl;



}
