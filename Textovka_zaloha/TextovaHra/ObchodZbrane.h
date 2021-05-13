//
// Created by Vojta on 14.12.2020.
//

#ifndef TEXTOVAHRA_OBCHODZBRANE_H
#define TEXTOVAHRA_OBCHODZBRANE_H

#include <vector>
#include "Obchod.h"
#include "Zbran.h"
#include "Hrac.h"

class ObchodZbrane: public Obchod {
    std::vector<Zbran*> m_zbrane;

Hrac* m_hrac;

public:
    ObchodZbrane(std::string nazev);

    void pridejZboziw(Zbran* zbran);
    void vypisZbozi();
    void printInfo();
    void nazevLokace();
    void ukazVolby();
    void koupit(Hrac* hrac, int jake);

    void pridejZbozia(Zbroj* zbroj);//metoda pro funkncnost v poli lokaci
};


#endif //TEXTOVAHRA_OBCHODZBRANE_H
