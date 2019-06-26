//
// Created by Maria Hilda Bermejo on 11/18/18.
//

#include "CTriangulo.h"

CTriangulo::CTriangulo(TipoNumerico lado):CPoligono(lado)
{
}

TipoNumerico CTriangulo::Apotema()
{
  return (m_lado * sqrt(3)/6.0);
}

TipoNumerico CTriangulo::SemiPerimetro()
{
  return (3.0 * m_lado/2.0);
}


