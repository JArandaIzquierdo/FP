#include <iostream>
using namespace std;

void crearFecha(double fecha,int &dia,int &mes,int &anio){

  int fechaAux=fecha/100;//fechaAux=201607

  //Calculamos los dias
  //(201607,01 - 201607)*100
  dia=((fecha/100)-fechaAux)*100;//Dia =1

  //Quitamos las cifras de los dias
  fecha=fechaAux;//fecha=201607
  fechaAux=fechaAux/100;//fechaAux=2016

  //Calculamos los meses
  //(2016,07-2016)*100= 7 -----------> pero aqui sale 6 no se porque
  mes=((fecha/100)-fechaAux)*100;

  cout<<"El mes es: "<<mes<<endl;

  anio=fechaAux;//anio=2016

}



int main(){

  double fecha=20160701;
  int dia, mes, anio;


  crearFecha(fecha,dia,mes,anio);

  cout<<fecha<<endl;
  cout<<"El formato en 3 enteros es: "<<anio<<" "<<mes<<" "<<dia<<endl;
}
