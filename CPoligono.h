//
// Created by Maria Hilda Bermejo on 11/19/18.
//

#ifndef PROG_01_CPOLIGONO_H
#define PROG_01_CPOLIGONO_H

#include "Definiciones.h"

class CPoligono
{
  protected:
    TipoNumerico m_lado;
  public:
    CPoligono(){}
    CPoligono(TipoNumerico lado);
    virtual ~CPoligono(){}
    //---metodo de acceso
    void set_m_Lado(TipoNumerico lado) { m_lado = lado;}
    TipoNumerico getLado(){ return m_lado;}

    virtual TipoNumerico Apotema()=0;
    virtual TipoNumerico SemiPerimetro()=0;
    TipoNumerico Area();
};

#endif //PROG_01_CPOLIGONO_H

