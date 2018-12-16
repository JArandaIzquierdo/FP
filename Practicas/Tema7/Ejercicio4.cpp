/*
Defina una estructura fecha que almacene el dıa, mes y anio como enteros.
Realicelas siguientes funciones:
  • Funcion que reciba un puntero a una fecha y lea valores para la fecha desde
  la entrada estandar.
  • Funcion que reciba un puntero a una fecha y envıe la fecha a la salida
  estandar con el formato dıa/mes/anio
  • Funcion que dados dos punteros a fechas indique si la primera es anterior a
  la segunda.
  • El incremento en un anio de una fecha. Tenga en cuenta los anios bisiestos:
  el 29/2/2008 mas un ano es el 28/2/2009.

Realice tambien un programa principal que permita probar el funcionamiento de
las funciones.
*/
#include <iostream>
using namespace std;

struct fecha{
  int dia;
  int mes;
  int anio;
};
void mostrarFecha(const fecha* f){
  cout<<"Dia: "<<(*f).dia<<endl;
  cout<<"Mes: "<<(*f).mes<<endl;
  cout<<"Anio: "<<(*f).anio<<endl;
}

void introducirFecha(fecha* fecha1){
  cout<<"Introduzca un dia: ";
  cin>>(*fecha1).dia;

  cout<<"Introduzca un mes: ";
  cin>>(*fecha1).mes;

  cout<<"Introduzca un anio: ";
  cin>>(*fecha1).anio;
}

bool primeraAnteriorQueSegunda(const fecha* fecha1, const fecha* fecha2){
  if((*fecha1).anio>(*fecha2).anio)
    return false;

  if((*fecha1).anio<(*fecha2).anio)
    return true;

  if((*fecha1).anio==(*fecha2).anio){

    if((*fecha1).mes>(*fecha2).mes)
      return false;

    if((*fecha1).mes<(*fecha2).mes)
      return true;

    if((*fecha1).mes==(*fecha2).mes){

      if((*fecha1).dia>(*fecha2).dia)
        return false;

      if((*fecha1).dia<(*fecha2).dia)
        return true;

      if((*fecha1).dia==(*fecha2).dia)
        return false;

    }
  }
}


int main(){

/*
• Funcion que reciba un puntero a una fecha y lea valores para la fecha desde
la entrada estandar.
• Funcion que reciba un puntero a una fecha y envıe la fecha a la salida
estandar con el formato dıa/mes/anio
*/
// fecha fecha1;
// introducirFecha(&fecha1);
// mostrarFecha(&fecha1);

/*
• Funcion que dados dos punteros a fechas indique si la primera es anterior a
la segunda.
*/
// fecha fecha1={21,4,2020};
// fecha fecha2={21,4,2020};
//
// bool compararFechas=primeraAnteriorQueSegunda(&fecha1, &fecha2);
// if(compararFechas)
//   cout<<"La primera fecha es anterior a la segunda"<<endl;
// else
//   cout<<"La primera fecha NO es anterior a la segunda"<<endl;

}
