//
// Created by Vojta on 12.12.2020.
//

#include "Menu.h"
#include <iostream>

bool m_objevenaPrace = 0;
bool m_objevenListek = 0;
int m_pocetPresunu = 0;

//vytvoreni Hrace
Hrac* hrac1 = new Hrac("neznamy", 90, 10, 10, 0);

//implementovani Lokaci
Lokace* domov = new Domov("Domov");
Lokace* prace = new Prace("Prace");
Lokace* arena = new Arena("Arena");
Obchod* obchodZbrane = new ObchodZbrane("Obchod se zbranemi");
Obchod* obchodZbroje = new ObchodZbroj("Obchod se Zbroji");
//Obchod* obchodLektvary = new ObchodLektvary("Lektvary");
//vytvoreni Zbrani
Zbran* klacek = new Zbran("Klacek", 10, 10);
Zbran* mecOsudu = new Zbran("Mec osudu", 20, 20);
Zbran* kladivoVeterana = new Zbran("Kladivo veterana", 40, 40);
Zbran* mrazivySmutek = new Zbran("Mrazivy smutek", 80, 60);


//vytvoreni Zbroje
Zbroj* pytlovina = new Zbroj("Pytlovina", 10, 5);
Zbroj* kuze = new Zbroj("Kozena zbroj", 20, 10);
Zbroj* platova = new Zbroj("Platova zbroj", 40, 30);
Zbroj* legendarni = new Zbroj("Draci zbroj", 80, 45);

//vytvoreni Nepratel
Nepritel* prvni = new Nepritel("Draug", 50, 15, 5, 10);
Nepritel* druhy = new Nepritel("Igor", 60, 20, 15, 25);
Nepritel* treti = new Nepritel("Braust", 70, 25, 20, 25);
Nepritel* ctvrtky = new Nepritel("Jorgin", 80, 25, 25, 70);
Nepritel* paty = new Nepritel("Rollg", 90, 50, 30, 65);
Nepritel* boss = new Nepritel("Ranger", 100, 60, 50, 100);


void Menu::polozky(){
    obchodZbrane->pridejZboziw(klacek);
    obchodZbrane->pridejZboziw(mecOsudu);
    obchodZbrane->pridejZboziw(kladivoVeterana);
    obchodZbrane->pridejZboziw(mrazivySmutek);

    obchodZbroje->pridejZbozia(pytlovina);
    obchodZbroje->pridejZbozia(kuze);
    obchodZbroje->pridejZbozia(platova);
    obchodZbroje->pridejZbozia(legendarni);
}

void Menu::nepratele() {
    arena->volba5(prvni);
    arena->volba5(druhy);
    arena->volba5(treti);
    arena->volba5(ctvrtky);
    arena->volba5(paty);
    arena->volba5(boss);

    arena->volba4(hrac1);//pridani hrace do fight system
}

void Menu::zadejPrikaz(){
    getline (std::cin, prikaz);
}
void Menu::pridejLokaci(Lokace *lokace) {
    m_lokaceNaMape.push_back(lokace);
}
void Menu::vypisLokace(){
    if(prikaz== "m") {
        for (int i = 0; i < m_lokaceNaMape.size(); i++) {
            std::cout << "p " << i+1 << ". ";
            m_lokaceNaMape.at(i)->nazevLokace();
        }
    }
}
void Menu::presunDoLokace(){
    if(prikaz == "presun domov" || prikaz == "p 1"){
        if(nachazise == 1){
            std::cout << "Uz se nachazis v dane lokaci" << std::endl;
        }
        else{
            std::cout << "jdes domu" << std::endl;
            m_lokaceNaMape.at(0)->printInfo();
            nachazise = 1;
            domov->ukazVolby();
            m_pocetPresunu++;
        }
    }
    if( (prikaz == "presun prace" || prikaz == "p 2") && m_lokaceNaMape.size() >= 2){

        if(nachazise == 2){
            std::cout << "Uz se nachazis v dane lokaci" << std::endl;
        }
        else{
            std::cout << "jdes do prace." << std::endl;
            m_lokaceNaMape.at(1)->printInfo();
            nachazise = 2;
            prace->ukazVolby();
            m_pocetPresunu++;
        }
    }
    if( (prikaz == "presun arena" || prikaz == "p 3") && m_lokaceNaMape.size() >= 3){

        if(nachazise == 3){
            std::cout << "Uz se nachazis v dane lokaci" << std::endl;
        }
        else{
            std::cout << "jdes do areny" << std::endl;
            m_lokaceNaMape.at(2)->printInfo();
            nachazise = 3;
            arena->ukazVolby();
            m_pocetPresunu++;
        }
    }

    if( (prikaz == "presun zbrane" || prikaz == "p 4") && m_lokaceNaMape.size() >= 3){

        if(nachazise == 4){
            std::cout << "Uz se nachazis v dane lokaci" << std::endl;
        }
        else{
            std::cout << "jdes do obchodu se zbranemi" << std::endl;
            m_lokaceNaMape.at(3)->printInfo();
            nachazise = 4;
            obchodZbrane->ukazVolby();
            m_pocetPresunu++;
        }
    }
    if( (prikaz == "presun zbroje" || prikaz == "p 5") && m_lokaceNaMape.size() >= 3){

        if(nachazise == 5){
            std::cout << "Uz se nachazis v dane lokaci" << std::endl;
        }
        else{
            std::cout << "jdes do obchodu se zbroji" << std::endl;
            m_lokaceNaMape.at(4)->printInfo();
            nachazise = 5;
            obchodZbroje->ukazVolby();
            m_pocetPresunu++;
        }
    }
}

void Menu::zobrazNapovedu() {
        std::cout <<"Prikazy Hrace" << std::endl;
        std::cout <<"s - Vypsani statistiky" << std::endl;
        std::cout <<"i - ukazat inventar" << std::endl;
        std::cout <<"eq zbran (cislo. z invetare 1-4) - nasadit zbran" << std::endl;
        std::cout <<"eq zbroj (cislo. z invetare 1-4) - nasadit zbroj" << std::endl;
        std::cout <<"======================================" << std::endl;
        std::cout <<"m - zobrazi mapu" << std::endl;
        std::cout <<"p (cislo lokace) - presun do pojmenovane lokace na mape" << std::endl;
}

void Menu::hrac(){
    if(prikaz == "s"){
        hrac1->vypisStatistiky();
    }
    if(prikaz == "i"){
        hrac1->ukazInventar();
    }
    if(prikaz == "eq zbran 1"){
        hrac1->nasaditZbran(0);
    }
    if(prikaz == "eq zbran 2"){
        hrac1->nasaditZbran(1);
    }
    if(prikaz == "eq zbran 3"){
        hrac1->nasaditZbran(2);
    }
    if(prikaz == "eq zbran 4"){
        hrac1->nasaditZbran(3);
    }


    if(prikaz == "eq zbroj 1"){
        hrac1->nasaditZbroj(0);
    }
    if(prikaz == "eq zbroj 2"){
        hrac1->nasaditZbroj(1);
    }
    if(prikaz == "eq zbroj 3"){
        hrac1->nasaditZbroj(2);
    }
    if(prikaz == "eq zbroj 4"){
        hrac1->nasaditZbroj(3);
    }


}

void Menu::moznostiVLokaci() {
    if (nachazise == 1) {//pokud se hrac nachazi v oblasti domov
        prikazyDomov();
    }
    if(nachazise == 2 && m_lokaceNaMape.size() >= 2){//pokud se hrac nachazi v oblasti prace, musi platit i to, ze praci objevil
       prikazyPrace();
    }
    if(nachazise == 3 && m_lokaceNaMape.size() >= 3) {//pokud se hrac nachazi v arena
      prikazyArena();
    }
    if(nachazise == 4 && m_lokaceNaMape.size() >= 3) {//pokud se hrac nachazi v zbrane
      prikazyZbrane();
    }
    if(nachazise == 5 && m_lokaceNaMape.size() >= 3) {//pokud se hrac nachazi v zbroje
       prikazyZbroj();
    }
}

void Menu::uvod(){
    polozky();
    nepratele();
    pridejLokaci(domov);
    hrac1->vytvorit();
    std::cout << "vitej na tvem dobrodruzstvi valecniku, co si rika ";
    hrac1->getJmeno();
    std::cout << ", jsi vezen, ktery se musi vykoupit za sve hrichy " << std::endl;
    std::cout << "prave jsi se probudil ve tmave mistnosti, pomoci prikazu [h] si kdykoliv pripomen co muzes delat" << std::endl;
    domov->ukazVolby();
}

void Menu::prikazyDomov(){
    if(prikaz == "h"){
        zobrazNapovedu();
        domov->ukazVolby();//ukáže volby
    }
    if(prikaz == "1"){
        domov->volba1(); //Ukaze kalendar
    }
    if(prikaz == "2"){
        domov->volba2(); //jde spat
        hrac1->spanek();
    }
    if (prikaz == "3"){
        if(m_objevenaPrace == 0){
            domov->volba3(); //podiva se na cas, odemyka lokaci
            pridejLokaci(prace);
            m_objevenaPrace = 1;
            std::cout << "Objevena nova Lokace!" << std::endl;

            for (int i = 0; i < m_lokaceNaMape.size(); i++) {
                std::cout << "p " << i+1 << ". ";
                m_lokaceNaMape.at(i)->nazevLokace();
            }
        }
        else{
            std::cout<< "Celkem jsi se presunul " << m_pocetPresunu << " krat" << std::endl;
        }
    }

}
void Menu::prikazyPrace(){
    if(prikaz == "h"){
        zobrazNapovedu();
        prace->ukazVolby();
    }
    if(prikaz == "1"){
        prace->volba1();
        hrac1->vydelejPenize(4);

        srand(time(nullptr));
        int r = rand() % 10 + 1;
        if(m_objevenListek == 0){
            if(r > 7){
                std::cout << "Jakmile jsi odvazel uran v dole, nasel jsi papir, na kterem je napsano " << std::endl;
                std::cout << "Pokud se chces i ty se vykoupit ze svych hrichu, mas moznost se zucastnit zapasu" << std::endl;
                pridejLokaci(arena);
                pridejLokaci(obchodZbrane);
                pridejLokaci(obchodZbroje);

                std::cout << "Objeveny nove Lokace!" << std::endl;

                for (int i = 0; i < m_lokaceNaMape.size(); i++) {
                    std::cout << "p " << i+1 << ". ";
                    m_lokaceNaMape.at(i)->nazevLokace();
                }

                m_objevenListek = 1;
            }
        }

    }
}
void Menu::prikazyArena(){
    if (prikaz == "h") {
        zobrazNapovedu();
        arena->ukazVolby();
    }
    if (prikaz == "1") {
        arena->volba1();
    }
    if (prikaz == "2") {
        arena->volba2();
    }
}

void Menu::prikazyZbrane(){
    if (prikaz == "h") {
        zobrazNapovedu();
        obchodZbrane->ukazVolby();
    }
    if(prikaz == "1"){
        obchodZbrane->vypisZbozi();
    }
    if(prikaz == "2 1"){
        obchodZbrane->koupit(hrac1, 0);
    }
    if(prikaz == "2 2"){
        obchodZbrane->koupit(hrac1, 1);
    }
    if(prikaz == "2 3"){
        obchodZbrane->koupit(hrac1, 2);
    }
    if(prikaz == "2 4"){
        obchodZbrane->koupit(hrac1, 3);
    }
}
void Menu::prikazyZbroj(){
    if (prikaz == "h") {
        zobrazNapovedu();
        obchodZbroje->ukazVolby();
    }
    if(prikaz == "1"){
        obchodZbroje->vypisZbozi();
    }
    if(prikaz == "2 1"){
        obchodZbroje->koupit(hrac1, 0);
    }
    if(prikaz == "2 2"){
        obchodZbroje->koupit(hrac1, 1);
    }
    if(prikaz == "2 3"){
        obchodZbroje->koupit(hrac1, 2);
    }
    if(prikaz == "2 4"){
        obchodZbroje->koupit(hrac1, 3);
    }
}

void Menu::hrat(){
    uvod();//vypisuje uvodni text
    while(1) {
        zadejPrikaz();
        vypisLokace();
        presunDoLokace();
        moznostiVLokaci();
        hrac();
    }
}