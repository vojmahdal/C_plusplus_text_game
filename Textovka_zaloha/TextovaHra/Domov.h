//
// Created by Vojta on 12.12.2020.
//

#ifndef TEXTOVAHRA_DOMOV_H
#define TEXTOVAHRA_DOMOV_H

#include "Lokace.h"

class Domov: public Lokace{

public:
    Domov(std::string nazev);

    void printInfo();
    void nazevLokace();


    void ukazVolby();
    void volba1();
    void volba2();
    void volba3();
    void volba4(Hrac* hrac);
    void volba5(Nepritel* nepritel);

};


#endif //TEXTOVAHRA_DOMOV_H
