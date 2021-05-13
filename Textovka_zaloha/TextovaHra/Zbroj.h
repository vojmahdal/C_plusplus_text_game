//
// Created by Vojta on 20.01.2021.
//

#ifndef TEXTOVAHRA_ZBROJ_H
#define TEXTOVAHRA_ZBROJ_H

#include <iostream>
class Zbroj {
    std::string m_nazev;
    int m_cena;
    int m_bonusObrany;
public:
    Zbroj(std::string nazev, int cena, int bonusObrany);
    int getBonusObrany();
    int getCena();
    void getJmeno();
    void printInfo();
    void infoInventory();
};


#endif //TEXTOVAHRA_ZBROJ_H
