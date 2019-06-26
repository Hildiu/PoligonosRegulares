#include <iostream>
#include "Definiciones.h"
#include "CCuadrado.h"
#include "CTriangulo.h"
#include "CHexagono.h"

using namespace std;

int main()
{
  EnteroSinSigno Opcion;
  TipoNumerico lado;
  CPoligono *pUnPoligono= nullptr;

  do
  {
    cout << "Seleccione el tipo de poligono que quiere crear \n";
    cout << "1. Triangulo \n";
    cout << "2. Cuadrado \n";
    cout << "3. Hexagono \n";
      cout << "Ingresa el tipo : ";
      cin >> Opcion;
  }while( Opcion<1 || Opcion>3);

  cout <<"Lado : ";
  cin >> lado;
  switch(Opcion)
  {
    case 1:
      pUnPoligono = new CTriangulo(lado);
      break;
    case 2:
      pUnPoligono = new CCuadrado(lado);
      break;
    case 3:
      pUnPoligono = new CHexagono(lado);
  }
  cout << "Apotema : "<< pUnPoligono->Apotema() <<"\n";
  cout << "Semiperimetro :" << pUnPoligono->SemiPerimetro() << "\n";
  cout << "El area es " << pUnPoligono->Area()<< "\n";
  delete pUnPoligono;
  pUnPoligono= nullptr;
  return 0;
}


