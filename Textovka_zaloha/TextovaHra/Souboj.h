//
// Created by Vojta on 22.01.2021.
//

#ifndef TEXTOVAHRA_SOUBOJ_H
#define TEXTOVAHRA_SOUBOJ_H

#include "Hrac.h"
#include "Nepritel.h"
#include <time.h>
#include <stdlib.h>

class Souboj {
    Hrac* m_hrac;
    Nepritel* m_nepritel;

public:
    Souboj(Hrac* hrac);
    void bojuj(Nepritel* nepritel);
    int setPorazen(int i);//pomuze v arene na posunuti dalsiho protivnika

    void konec(Hrac* hrac);//ukonci program
};


#endif //TEXTOVAHRA_SOUBOJ_H
