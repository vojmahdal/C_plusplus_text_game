//
// Created by Vojta on 20.01.2021.
//

#ifndef TEXTOVAHRA_HRAC_H
#define TEXTOVAHRA_HRAC_H

#include "Zbran.h"
#include "Zbroj.h"

#include <iostream>
#include <vector>
class Hrac {
std::string m_jmeno;
int m_zivot;
int m_utok;
int m_obrana;
int m_penize;
int m_bonusObrany;
int m_bonusUtoku;


std::vector<Zbran*> m_zbrane;
std::vector<Zbroj*> m_zbroje;
Zbran* EQzbran[0];
Zbroj* EQzbroj[1];

public:
    Hrac(std::string jmeno, int zivot, int utok, int obrana, int penize);

    void vytvorit();
    void getJmeno();
    int getPenize();
    void vypisStatistiky();
    void nasaditZbroj(int jake);
    void nasaditZbran(int jake);
    int getUtok();
    int getObrana();
    int getZivot();

    void setZivot(int zivot);


    void vydelejPenize(int mzda);
    void prohratPenize(int kolik);
    void vzdatSe(int kolik);

    void kupZbran(int jake, std::vector<Zbran*> zbrane);
    void kupZbroj(int jake, std::vector<Zbroj*> zbroje);

    void spanek();//pro lokaci domov- doplni zdravi

    void ukazInventar();


};


#endif //TEXTOVAHRA_HRAC_H
