//
// Created by Maria Hilda Bermejo on 11/18/18.
//
#ifndef PROG_01_CTRIANGULO_H
#define PROG_01_CTRIANGULO_H

#include "Definiciones.h"
#include "CPoligono.h"

class CTriangulo:public CPoligono
{
  public:
    CTriangulo() {};
    CTriangulo(TipoNumerico lado);
    virtual ~CTriangulo(){};

    TipoNumerico Apotema() override;
    TipoNumerico SemiPerimetro() override;
};

#endif //PROG_01_CTRIANGULO_H


