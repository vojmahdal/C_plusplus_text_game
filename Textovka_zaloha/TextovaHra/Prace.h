//
// Created by Vojta on 12.12.2020.
//

#ifndef TEXTOVAHRA_PRACE_H
#define TEXTOVAHRA_PRACE_H

#include "Lokace.h"
#include "Hrac.h"

class Prace: public Lokace {

Hrac* hrac;

public:
    Prace(std::string nazev);
    void printInfo();


    void nazevLokace();

    void ukazVolby();
    void volba1();
    void volba2();
    void volba3();
    void volba4(Hrac* hrac);
    void volba5(Nepritel* nepritel);
};


#endif //TEXTOVAHRA_PRACE_H
