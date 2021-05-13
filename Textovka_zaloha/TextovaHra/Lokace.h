//
// Created by Vojta on 03.12.2020.
//

#ifndef TEXTOVAHRA_LOKACE_H
#define TEXTOVAHRA_LOKACE_H
#include <string>
#include "Nepritel.h"
#include "Hrac.h"

class Lokace {
protected:
std::string m_nazev;

public:
    Lokace(std::string nazev);
    std::string getNazev();
    virtual void printInfo() = 0;
    virtual void nazevLokace() = 0;

    virtual void ukazVolby() = 0;
    virtual void volba1() = 0;
    virtual void volba2() = 0;
    virtual void volba3() = 0;
    virtual void volba4(Hrac* hrac) = 0;
    virtual void volba5(Nepritel* nepritel) = 0;
};


#endif //TEXTOVAHRA_LOKACE_H
