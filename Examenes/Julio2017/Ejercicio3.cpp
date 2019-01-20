#include <iostream>
using namespace std;

struct goles{
  int codigo;
  int jornada;
  int nGoles;
};

struct rango{
  int primeraJornada;
  int ultimaJornada;
};

int buscarCodigo(goles vGoles[],int tamVGoles, int vCodigos[],int tamVCodigos, rango rangoDado){

  int numeroGoles;
  int codigo=0;
  int maximoGoles=0;
  //Recorremos el vector de los codigos
  for(int i=0;i<tamVCodigos;i++){
    numeroGoles=0;
    for(int j=0; j<tamVGoles;j++){
      if(vCodigos[i]==vGoles[j].codigo && (vGoles[j].jornada >= rangoDado.primeraJornada && vGoles[j].jornada <= rangoDado.ultimaJornada)){
        numeroGoles= numeroGoles + vGoles[j].nGoles;
      }
    }
    if(maximoGoles<numeroGoles){
      maximoGoles= numeroGoles;
      codigo= vCodigos[i];
    }
  }
  return codigo;

}

int main(){
  //Vector con los codigos, jonadas y goles
  goles vGoles[4]={{1,1,2},{3,1,3},{1,2,2},{2,1,5}};

  int vCodigos[2]={1,3};
  rango rangoDado={1,10};

  int codJugMasGoles = buscarCodigo(vGoles, 4,vCodigos, 2, rangoDado);

  if(codJugMasGoles==0){
    cout<<"No existe ningun jugador con ese codigo"<<endl;
  }
  else{
    cout<<"El codigo del jugador que mas goles a marcado entre la jornada "
    <<rangoDado.primeraJornada<< " y la jornada "<<rangoDado.ultimaJornada<<" es: "
    <<codJugMasGoles<<endl;
  }
}
