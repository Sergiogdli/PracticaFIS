//
//  Entero.h
//  AEDA3
//
//  Created by Sergio García on 28/3/16.
//  Copyright © 2016 Sergio García. All rights reserved.
//

#ifndef Entero_h
#define Entero_h

#include "Numero.h"

#include "Real.h"
#include "Complejo.hpp"
#include "Racional.hpp"

class entero_t: public numero_t{
private:
    int valor_;
    
public:
    
    entero_t(void);
    entero_t(int valor);    //Constructor
    ~entero_t(void);        //Destructor
    
    entero_t operator +(const entero_t& otro);
    entero_t operator -(const entero_t& otro);
    entero_t operator *(const entero_t& otro);
    entero_t operator /(const entero_t& otro);
    entero_t& operator =(const entero_t& otro);
    
    
    int get_valor(void) const;    //Obtener el valor
    
    const entero_t toEntero() const;        // Devuelve una copia del Numero actual
    const racional_t toRacional() const;        // Devuelve una copia del Numero actual
    const real_t toReal() const;        // Devuelve una copia del Numero actual
    const complejo_t toComplejo() const;        // Devuelve una copia del Numero actual
    
    
    // Escribe un Numero al flujo
    std::ostream& toStream(std::ostream& sout) const;
    
    // Lee un Numero desde flujo
    std::istream& fromStream(std::istream& sin);

    friend std::ostream& operator<<(std::ostream& os, const entero_t &ent);

};
#endif /* Entero_h */
