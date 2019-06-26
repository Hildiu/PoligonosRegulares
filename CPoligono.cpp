//
// Created by Maria Hilda Bermejo on 11/19/18.
//

#include "CPoligono.h"

CPoligono::CPoligono(TipoNumerico lado)
{
  m_lado = lado;
}

TipoNumerico CPoligono::Area()
{
  return ( SemiPerimetro() * Apotema());
}

