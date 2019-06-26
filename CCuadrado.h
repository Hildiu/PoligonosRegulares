//
// Created by Maria Hilda Bermejo on 11/18/18.
//

#ifndef PROG_01_CCUADRADO_H
#define PROG_01_CCUADRADO_H

#include "Definiciones.h"
#include "CPoligono.h"

class CCuadrado:public CPoligono
{
  public:
    CCuadrado() {};
    CCuadrado(TipoNumerico lado);
    virtual ~CCuadrado(){};

    TipoNumerico Apotema() override;
    TipoNumerico SemiPerimetro() override;
};

#endif //PROG_01_CCUADRADO_H













