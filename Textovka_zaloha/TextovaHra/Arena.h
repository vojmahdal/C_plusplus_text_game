//
// Created by Vojta on 13.12.2020.
//

#ifndef TEXTOVAHRA_ARENA_H
#define TEXTOVAHRA_ARENA_H

#include "Lokace.h"
#include "Nepritel.h"
#include "Souboj.h"
#include "Hrac.h"

#include <vector>

class Arena: public Lokace {
std::vector<Nepritel*> m_nepratele;
Hrac* m_hrac;
Souboj* m_souboj;
public:
    Arena(std::string nazev);

    void printInfo();
    void nazevLokace();

    void ukazVolby();
    void volba1();
    void volba2();
    void volba3();
    void volba4(Hrac* hrac);
    void volba5(Nepritel* nepritel);
};


#endif //TEXTOVAHRA_ARENA_H
