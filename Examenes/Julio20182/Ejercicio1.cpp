#include <iostream>
using namespace std;


bool comprobar(int v1[], int v2[], int tamV1, int tamV2){

  bool iguales = false;

  if(tamV1 != tamV2)
    return false;

  for(int i=0;i<tamV1;i++){
    iguales=false;
    for(int j=0; j<tamV2;j++){
      if(v1[i]==v2[j])
        iguales = true;
    }
    if(iguales==false)
      return false;
  }
  if(iguales)
    return true;
}

int main(){

  const int tamV1=3;
  const int tamV2=3;

  int v1[tamV1]={1,2,3};
  int v2[tamV2]={3,1,2};

  bool sonIguales=comprobar(v1, v2, tamV1, tamV2);


  if(sonIguales)
    cout<<"Los vectores son iguales"<<endl;
  else
    cout<<"Los vectores NO son iguales"<<endl;
}
