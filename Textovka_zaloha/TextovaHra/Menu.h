//
// Created by Vojta on 12.12.2020.
//

#ifndef TEXTOVAHRA_MENU_H
#define TEXTOVAHRA_MENU_H

#include <vector>
#include "Lokace.h"

#include "Domov.h"
#include "Prace.h"
#include "Arena.h"

#include "Obchod.h"
#include "ObchodZbroj.h"
#include "ObchodZbrane.h"

#include "Hrac.h"

#include "Zbroj.h"
#include "Zbran.h"

class Menu {
    std::vector<Lokace*> m_lokaceNaMape;


    std::string prikaz;

    int nachazise = 1;// pomocný atribut, kde se nachází hráč.

public:
    void pridejLokaci(Lokace* lokace);
    void vypisLokace();
    void presunDoLokace();
    void zobrazNapovedu();
    void moznostiVLokaci();
    void zadejPrikaz();


    void uvod();//zacatek pribehu


    void hrac();

    void polozky();//prida polozky do obchodu
    void nepratele();//prida nepratele do areny a priradi hrace do souboje

    //moznosti v jednotlivych lokacich
    void prikazyDomov();
    void prikazyPrace();
    void prikazyArena();

    void prikazyZbrane();
    void prikazyZbroj();



    void hrat();//samotna hra
};



#endif //TEXTOVAHRA_MENU_H
