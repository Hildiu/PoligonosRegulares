//
// Created by Maria Hilda Bermejo on 11/18/18.
//

#ifndef PROG_01_CHEXAGONO_H
#define PROG_01_CHEXAGONO_H

#include "Definiciones.h"
#include "CPoligono.h"

class CHexagono:public CPoligono
{
  public:
    CHexagono() {};
    CHexagono(TipoNumerico lado);
    virtual ~CHexagono(){};

    TipoNumerico Apotema() override ;
    TipoNumerico SemiPerimetro() override;
};

#endif //PROG_01_CHEXAGONO_H

