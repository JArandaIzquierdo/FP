#include <iostream>
using namespace std;

struct fecha{
  int dia;
  int mes;
  int anio;
};

struct registro{
  fecha date;
  double ganancia;
};

/*
Dadas 2 fechas (solo el mes y el anio), devuelve en que mes y en que anio del
intervalo de las 2 fechas se ha obtenido mas ganancias
*/

void filtro(fecha fecha1, fecha fecha2, registro prueba[], int tamPrueba, registro validos[], int &tamValidos){

  int contador=0;

  for(int i=0; i<tamPrueba;i++){

    if(prueba[i].date.anio >= fecha1.anio && prueba[i].date.anio <= fecha2.anio){
      if((prueba[i].date.anio==fecha1.anio && prueba[i].date.mes>fecha1.mes) ||
      (prueba[i].date.anio==fecha2.anio && prueba[i].date.mes<fecha2.mes)){
          validos[contador]=prueba[i];
          contador++;
          cout<<"{"<<validos[contador].date.dia<<", "<<validos[contador].date.mes<<", "<<validos[contador].date.anio<<"}, "<<validos[contador].ganancia<<"} ";

        }

      }
    }
    cout<<"{";
    for(int i=0; i<contador;i++){
      cout<<"{"<<validos[i].date.dia<<", "<<validos[i].date.mes<<", "<<validos[i].date.anio<<"}, "<<validos[i].ganancia<<"} ";
    }
    cout<<endl;
  }

void fechaMaximaGanancia(fecha fecha1, fecha fecha2, registro prueba[], int tamPrueba){

  //Creamos un vector de fechas validas dentro de las fechas establecidas
  registro validos[tamPrueba];
  int tamValidos=tamPrueba;

  filtro(fecha1, fecha2, prueba,tamPrueba,validos,tamValidos);
}



int main (){

registro prueba[4]={{{21,3,2014},50.7},{{24,12,2014},123.8}, {{3,3,2014},200},{{3,5,2015},43.6}};

fecha fecha1={0,2,2013};
fecha fecha2={0,4,2015};

fechaMaximaGanancia(fecha1, fecha2, prueba, 4);
// fecha fechaGanancia = fechaMaximaGanancia(fecha1, fecha2, prueba, 4);

}
