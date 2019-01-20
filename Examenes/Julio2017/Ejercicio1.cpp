#include <iostream>
using namespace std;

void correccion(string vEspanol[], int tamVEspanol,string vTraduccionPersona[],
int tamVTraduccionPersona, int vBien[], int &tamBien, int vMal[], int &tamMal){
  //Inicializamos los tamaños de los vectores a 0
  tamMal=0;
  tamBien=0;

  for(int i=0; i<tamVEspanol;i++){
    if(vEspanol[i]==vTraduccionPersona[i]){
      vBien[tamBien]=i;
      tamBien++;
    }
    else{
      vMal[tamMal]=i;
      tamMal++;
    }
  }
}

int main(){

  const int TAM=3;

  //Inicializamos los vectores con las palabras en ingles y su traduccion
  string vEspanol[TAM]={"cerebro","mesa","tenedor"};
  string vIngles[TAM]={"brain","table","fork"};
  //Creamos 2 vectores para almacenar las palabras bien y mal escritas
  int vBien[TAM];
  int vMal[TAM];
  //Contador de palabras bien y mal escritas
  int tamBien=0;
  int tamMal=0;
  //Creamos el vector que almacena la traduccion hecha por la persona
  string vTraduccionPersona[TAM];

  for(int i=0;i<TAM;i++){
    cout<<"Introduzca la traduccion de "<<vIngles[i]<<": ";
    cin>>vTraduccionPersona[i];
  }

  correccion(vEspanol,TAM, vTraduccionPersona,TAM, vBien, tamBien, vMal, tamMal);

  //Mostramos los resultados
  cout<<"_________________________________________ "<<endl;
  cout<<"Palabras bien traducidas: "<<endl;

  for(int i=0;i<tamBien;i++){
    for(int j=0;j<TAM;j++){
      if(vBien[i]==j){
        cout<<vIngles[j]<<endl;
      }
    }
  }
  cout<<"_________________________________________ "<<endl;
  cout<<"Palabras mal traducidas: "<<endl;

  for(int i=0;i<tamMal;i++){
    for(int j=0;j<TAM;j++){
      if(vMal[i]==j){
        cout<<vIngles[j]<<" -> "<<vEspanol[j]<<endl;
      }
    }
  }
}
