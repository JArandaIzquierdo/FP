#include <iostream>
#include <string>
using namespace std;

const int TMXVLIBROS = 10;
const int TMXVCLIENTES = 10;
const int TMXVVENTAS = 10;


// Struct que representa un libro
struct libro{
  int codigo;
  string titulo;
  double precio;
};

//Struct que representa un cliente
struct cliente{
  int codigo;
  string nombre;
};

//Struct que representa una venta
struct venta{
  int codigoLibro;
  int codigoCliente;
};

/* Dado un codigo de libro obtener cuantos libros con ese codigo se han vendido*/
int obtenerLibros (venta vectorVentas[],int t,int codigo){
  int contador=0;
  for(int i=0; i<t;i++){
    if(vectorVentas[i].codigoLibro == codigo)
      contador++;
  }
  return contador;
}

/*Dado un codigo de libro, obtener su posicion en el vector de libros*/
int obtenerPosicionLibro(libro vectorLibros[], int t, int codigo){
  int posicion=-1;
  for(int i=0; i<t;i++){
    if(codigo == vectorLibros[i].codigo)
      posicion = i;
  }
  return posicion;
}

/*Obtener el titulo del libro mas vendido*/
string obtenerTituloDelMasVendido(venta vectorVentas[],int tVentas, libro vectorLibros[], int tLibros){
  int libroMasVendido=0;//Numero de veces que se ha vendido el libro mas vendido
  int auxLibroMasVendido=0;//Auxiliar que comprueba si cada libro es el libro mas vendido
  int codigoLibroMasvendido;//Codigo del libro mas vendido

  //Recorremos el vector comparando cada elemento con los demas, para saber cual se repite mas veces
  for(int i=0;i<tVentas;i++){
    auxLibroMasVendido=0;//cada vez que cojamos ese elemento, lo inicializamos a 0, ya que se ha repetido 0 veces
    for(int j=0;j<tVentas;j++){
      //si el codigo del elemento que hemos cogido es igual al del libro por el que estamos pasando
      if(vectorVentas[i].codigoLibro == vectorVentas[j].codigoLibro)
      //Las veces que se repite ese libro se incrementa
      auxLibroMasVendido++;
    }
    //Si el auxiliar del libro mas vendido es mayor que el libro mas vendido
    if(auxLibroMasVendido > libroMasVendido){
      //Tenemos un nuevo libro mas vendido
      libroMasVendido = auxLibroMasVendido;
      //y guardamos el codigo de ese nuevo lubro mas vendido
      codigoLibroMasvendido = vectorVentas[i].codigoLibro;
    }

  }
  /*Una vez encontrado el codigo del libro mas vendido, buscamos ese codigo
  dentro del venctor de libros, para devolver su titulo*/
  string tituloLibroMasVendido;
  //Recorremos el vector de libros
  for(int i=0; i<tLibros;i++){
    //si el codigo del libro dentro del vector es igual al mas vendido
    if(vectorLibros[i].codigo == codigoLibroMasvendido)
      //Guardamos el titulo del libro
      tituloLibroMasVendido = vectorLibros[i].titulo;
  }
  //devolvemos el titulo del libro mas vendido
  return tituloLibroMasVendido;
}

/*Dado un codigo de cliente, obtener un vector con los titulos de los libros
que ha comprado*/
void titulosDeLibrosComprados(int codigo, venta vectorVentas[], int tvVentas, libro vectorLibros[],int tvLibros, string vectorTitulosLibrosComprados[],int& tvTitulosLibrosComprados){
  //Guardamos los codigos de los libros que ha comprado un cliente
  int vectorCodigosLibros[tvVentas];

  //La posicion del vector de codigos de librosConCodigo
  int posicion = -1;

  //Recorremos el vector de ventas
  for(int i=0;i<tvVentas; i++){
    //Si el codigo coincide con el codigo del cliente
    if(codigo == vectorVentas[i].codigoCliente){
      posicion++;
      //Añadimos el codigo del libro de esa venta a ese cliente al vector de codigos de libros
      vectorCodigosLibros[posicion]=vectorVentas[i].codigoLibro;
      }
  }

  //Guardamos en el vector de titulosDeLibrosComprados los titulos
  int posicion2=-1;
  for(int i=0; i<=posicion;i++){
    for(int j=0;j<tvLibros;j++){
      if(vectorCodigosLibros[i]== vectorLibros[j].codigo){
        posicion2++;
        vectorTitulosLibrosComprados[posicion2]=vectorLibros[j].titulo;
      }
    }
    tvTitulosLibrosComprados = posicion2+1;
  }
}

//Obtener el nombre del cliente que ha comprado mas libros
string clienteCompraMasLibros(venta vectorVentas[], int tvVentas, cliente vectorClientes[], int tvClientes){

  //Numero de veces que ha comprado el cliente que mas libros ha comprado.
  int comprasDelMejorCliente=0;
  //El cliente que mas compras ha hecho hasta el momento
  int comprasDelMejorClienteTemporal;
  //Codigo del cliente que mas compras ha hecho
  int codigoClienteConMasCompras=-1;

  for(int i=0;i<tvVentas;i++){
    comprasDelMejorClienteTemporal=0;
    for(int j=0;j<tvVentas;j++){
      if(vectorVentas[i].codigoCliente == vectorVentas[j].codigoCliente){
        comprasDelMejorClienteTemporal++;
      }
    }
    if(comprasDelMejorClienteTemporal>comprasDelMejorCliente){
      comprasDelMejorCliente = comprasDelMejorClienteTemporal;
      codigoClienteConMasCompras = vectorVentas[i].codigoCliente;
    }
  }
  for(int i=0;i<tvClientes;i++){
    if(codigoClienteConMasCompras == vectorClientes[i].codigo)
      return vectorClientes[i].nombre;
  }
}

int main(){
  //Variables que definen el tamaño de los vectores
  int tvLibros=3;
  int tvClientes=4;
  int tvVentas=7;

  //Vectores que almacenan los libros, los clientes y las ventas
  libro vectorLibros[TMXVLIBROS]={{2233,"El pais de las maravillas",15},{3344,"El capitan",4},{4455, "Tortugas ninja",12}};
  cliente vectorClientes[TMXVCLIENTES]={{1,"Antonio"},{2,"Pepe"},{3,"Juan"}, {4,"Javi"}};
  venta vectorVentas[TMXVCLIENTES]={{2233,1},{3344,1},{2233,2},{3344,3},{4455,4},{4455,3},{4455,1}};

  // //Prueba para ver cuantos libros con un codigo dado se han vendido
  // int codigo= 4455;
  // int librosConCodigoN = obtenerLibros(vectorVentas,tvVentas,codigo);
  // cout<<"El libro con codigo "<<codigo<<" se ha vendido "<<librosConCodigoN<<" veces."<<endl;

  // //Pruega que pasando un codigo y vector de libros, devuelte la posicion en la que se encuentra ese codigo
  // int codigo= 4455;
  // int posicionLibro = obtenerPosicionLibro(vectorLibros,tvLibros,codigo);
  // cout<<"El libro con el codigo "<<codigo<<" se encuenta en la posicion "<<posicionLibro<<endl;


  // /*Prueba dando un codigo de cliente, obtener un vector con los titulos de todos
  // los libros que ha comprado*/
  // //Vector de string con los titulos de los libros que ha comprado una persona
  // string vectorTitulosLibrosComprados[TMXVLIBROS];
  // //Codigo con del cliente
  // int codigo=1;
  // //Tamanio del vector de titulos de libros comprados
  // int tvTitulosLibrosComprados=tvVentas;
  //
  // titulosDeLibrosComprados(codigo, vectorVentas, tvVentas, vectorLibros, tvLibros, vectorTitulosLibrosComprados, tvTitulosLibrosComprados);
  // cout<<"Los titulos de los libros comprados por el cliente con el codigo "<<codigo<<" son: "<<endl;
  // for(int i=0;i<tvTitulosLibrosComprados;i++){
  //   cout<< vectorTitulosLibrosComprados[i]<<", ";
  // }
  // cout<<endl;

  // //Obtener el nombre del cliente que mas libros ha comprado
  // cout<<"El nombre del cliente que mas compras ha hecho es: "<<clienteCompraMasLibros(vectorVentas,tvVentas,vectorClientes,tvClientes)<<endl;


}
