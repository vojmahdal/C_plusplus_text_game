//
// Created by Vojta on 14.12.2020.
//

#ifndef TEXTOVAHRA_OBCHOD_H
#define TEXTOVAHRA_OBCHOD_H

#include "Lokace.h"
#include "Zbran.h"
#include "Zbroj.h"

#include "Hrac.h"
class Obchod :public Lokace{

public:
    Obchod(std::string nazev);

    void printInfo();
    void nazevLokace();

    virtual void vypisZbozi() = 0;
    virtual void koupit(Hrac* hrac, int jake) = 0;

    virtual void pridejZboziw(Zbran* zbran) = 0;
    virtual void pridejZbozia(Zbroj* zbroj) = 0;

    void ukazVolby();
    void volba1();
    void volba2();
    void volba3();
    void volba4(Hrac* hrac);
    void volba5(Nepritel* nepritel);
};


#endif //TEXTOVAHRA_OBCHOD_H
