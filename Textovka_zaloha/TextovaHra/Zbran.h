//
// Created by Vojta on 20.01.2021.
//

#ifndef TEXTOVAHRA_ZBRAN_H
#define TEXTOVAHRA_ZBRAN_H

#include <iostream>
class Zbran {
    std::string m_nazev;
    int m_cena;
    int m_bonusUtoku;
public:
    Zbran(std::string nazev, int cena, int bonusUtoku);
    int getBonusUtoku();
    int getCena();
    void getJmeno();
    void printInfo();
    void infoInventory();
};


#endif //TEXTOVAHRA_ZBRAN_H
