#include <iostream>
using namespace std;

int main(){

  int n;

  cout<<"Introduzca un numero no negativo:";
  cin>>n;

  int aux=1;
  for(int i=0;i<n;i++){

    for(int j=0;j<aux;j++){

      cout<<"* ";
    }
    aux++;
    cout<<endl;
  }
}
