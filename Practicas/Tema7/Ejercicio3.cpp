/*Escriba una funcion que tome como parametro un vector y su tamanio y devuelva
el maximo y el mınimo de sus elementos. Utilice parametros de tipo puntero para
especificar el vector y los parametros de salida de la funcion.*/

 #include <iostream>
 using namespace std;

void maxYmin(const int* v, int* max, int* min, int t){
  *max = *min = v[0];
  for(int i=1; i<t;i++){
    if(v[i]> *max)
      *max= v[i];
      if(v[i]< *min)
        *max= v[i];
  }
}

int main(){
const int TAM=10;
int v[TAM]={1,2,3,4,5,9,10,8,6,7};

int max,min;

maxYmin(v, &max, &min,TAM);

cout<<"El maximo es: "<<max<<endl;
cout<<"El minimo es: "<<min<<endl;


}
