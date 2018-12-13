#include <iostream>
#include <string>
using namespace std;


bool LexicologinamenteMenor(string S1, string S2){

  if(S1.length() == S2.length()){
    for (int i = 0; i< S1.length();i++){
      if(S1[i]<S2[i])
        return true;
      else
        return false;

    }

  }
  else
    if(S1.length()<S2.length()){
      for(int i=0; i < S1.length();i++){
        if(S1[i]!= S2[i])
          return false;
        else
          return true;
      }
    }
    else
      return false;

}


int main(){

string S1, S2;
bool resultado;

cout<<"Introduce la cadena S1: "<<endl;
getline(cin>>ws, S1);

cout<<"Introduce la cadena S2: "<<endl;
getline(cin>>ws, S2);

resultado = LexicologinamenteMenor(S1,S2);

if(resultado)
  cout<<"S1 es menor"<<endl;
else
  cout<<"S1 es mayor"<<endl;


}
