#include <iostream>
using namespace std;


int comprobacion(int n){
  int contador=0;
  for(int i=n;i>=2;i=i/2){
    if(i%2!=0)
      return -1;
    contador++;
  }
  return contador;
}

int main(){

int n;
int logaritmo;

cout<<"Introduzca un numero que sea potencia positiva de 2: ";
cin>>n;

logaritmo = comprobacion(n);

if(logaritmo == -1){
  cout<<"El numero introducido no es potencia de 2"<<endl;
}
else{
  cout<<"El numero es: "<<logaritmo<<", porque 2 elevado a "<<logaritmo<< " es igual a "<<n<<endl;
}

}
