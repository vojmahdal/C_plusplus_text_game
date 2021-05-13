//
// Created by Vojta on 14.12.2020.
//

#ifndef TEXTOVAHRA_OBCHODZBROJ_H
#define TEXTOVAHRA_OBCHODZBROJ_H

#include <vector>

#include "Obchod.h"
#include "Zbroj.h"


class ObchodZbroj: public Obchod {
    std::vector<Zbroj*> m_zbroje;
public:
    ObchodZbroj(std::string nazev);

    void pridejZbozia(Zbroj* zbroj);
    void vypisZbozi();
    void printInfo();
    void nazevLokace();
    void ukazVolby();
    void koupit(Hrac* hrac, int jake);

    void pridejZboziw(Zbran* zbran);//metoda pro funkncnost v poli lokaci
};



#endif //TEXTOVAHRA_OBCHODZBROJ_H
