//
// Created by Vojta on 22.01.2021.
//

#ifndef TEXTOVAHRA_NEPRITEL_H
#define TEXTOVAHRA_NEPRITEL_H

#include <iostream>


class Nepritel {
std::string m_jmeno;
int m_zivot;
int m_utok;
int m_obrana;
int m_penize;
public:
    Nepritel(std::string jmeno, int zivot, int utok, int obrana, int penize);

    void getJmeno();
    int getZivot();
    int getUtok();
    int getObrana();
    int getPenize();
    void printInfo();
};


#endif //TEXTOVAHRA_NEPRITEL_H
