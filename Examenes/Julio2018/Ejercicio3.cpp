/*
Escribe un programa que lea un número entero no negativo n y dibuje un
triángulo rectángulo con base y altura n como el que se muestra a continuación
 para n = 4 (observa que debe aparecer un espacio entre cada asterisco situado
 en la misma línea):
*/
#include <iostream>
using namespace std;


int main(){

  int n;

  cout<<"Intruduzca un numero positivo: ";
  cin>>n;

  for(int i=1; i<=n; i++){
    for(int j=0; j<i;j++)
      cout<<"* ";
    cout<<endl;
  }
}
