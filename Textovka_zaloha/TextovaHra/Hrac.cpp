//
// Created by Vojta on 20.01.2021.
//

#include "Hrac.h"


Hrac::Hrac(std::string jmeno, int zivot, int utok, int obrana, int penize){
    m_jmeno = jmeno;
    m_zivot = zivot;
    m_utok = utok;
    m_obrana = obrana;
    m_penize = penize;
}
void Hrac::vytvorit() {
    std::string pomJmeno;
    std::cout << "zadej sve jmeno " << std::endl;
    getline(std::cin, pomJmeno);
    if(pomJmeno != ""){
        m_jmeno = pomJmeno;
    }
}
int Hrac::getPenize(){
    return m_penize;
}
int Hrac::getZivot() {
    return m_zivot;
}

void Hrac::setZivot(int zivot){
    m_zivot = zivot;
}

void Hrac::vypisStatistiky(){
    std::cout << "Jmeno: " << m_jmeno << std::endl;
    std::cout << "Zivot: " << m_zivot << std::endl;
    std::cout << "Utok: " << getUtok() << std::endl;
    std::cout << "Obrana: " << getObrana() << std::endl;
}
void Hrac::nasaditZbroj(int jake){
    int delka = m_zbroje.size();
    if(delka > jake){
        EQzbroj[1] = m_zbroje.at(jake);
        m_bonusObrany = EQzbroj[1]->getBonusObrany();
        std::cout << "nasadil jsi zbroj ";
        EQzbroj[1]->getJmeno();
    }
    else{
        std::cout << "nemas zbroj v inventari" << std::endl;
    }

}
void Hrac::nasaditZbran(int jake) {
    int delka = m_zbrane.size();
    if(delka > jake) {
        EQzbran[0] = m_zbrane.at(jake);
        m_bonusUtoku = EQzbran[0]->getBonusUtoku();
        std::cout << "nasadil jsi zbran ";
        EQzbran[0]->getJmeno();
    }
    else{
        std::cout << "nemas zbrane v inventari" << std::endl;
    }
}

void Hrac::kupZbran(int jake,  std::vector<Zbran*> zbrane){
   m_zbrane.push_back(zbrane.at(jake));
   int m_cena = zbrane.at(jake)->getCena();
   m_penize = m_penize - m_cena;
}
void Hrac::kupZbroj(int jake,  std::vector<Zbroj*> zbroje){
    m_zbroje.push_back(zbroje.at(jake));
    int m_cena = zbroje.at(jake)->getCena();
    m_penize = m_penize - m_cena;
}

int Hrac::getUtok(){
    return m_utok + m_bonusUtoku;
}
int Hrac::getObrana(){
    return m_obrana + m_bonusObrany;
}
void Hrac::getJmeno() {
     std::cout << m_jmeno;
}


void Hrac::vydelejPenize(int mzda){
    m_penize = m_penize + mzda;
    std::cout << "ziskal jsi " << mzda << " grosu" << std::endl;
}

void Hrac::prohratPenize(int kolik){
    m_penize = m_penize - kolik;
    if(m_penize > kolik){
        std::cout << "prohral jsi " << kolik << " grosu " << std::endl;
    }
    else{
        std::cout << "prohral jsi " << " vsechny grose " << std::endl;
        m_penize = 0;
    }
}
void Hrac::vzdatSe(int kolik){
    m_penize = m_penize - (kolik / 2);
    if(m_penize > (kolik/2)){
        std::cout << "Vzdal ses a musel jsi zaplatit " << kolik << " grosu " << std::endl;
    }
    else{
        std::cout << "Vzdal ses a musel jsi zaplatit " << " vsechny grose " << std::endl;
        m_penize = 0;
    }
}

void Hrac::ukazInventar() {
    if(m_zbrane.size() == 0 && m_zbroje.size() == 0){
        std::cout << "prazdny inventar" << std::endl;
    }
    if(m_zbrane.size() != 0) {
        std::cout << "Zbrane" << std::endl;
        std::cout << "-------" << std::endl;

        for (int i = 0; i < m_zbrane.size(); i++) {
            std::cout << i + 1 << ". ";
            m_zbrane.at(i)->infoInventory();
            if(EQzbran[0] == m_zbrane.at(i)){
                std::cout << " (nasazeno)";
            }
            std::cout << std::endl;
        }


    }
    if(m_zbroje.size() != 0) {
        std::cout << "Zbroje" << std::endl;
        std::cout << "-------" << std::endl;

        for (int i = 0; i < m_zbroje.size(); i++) {
            std::cout << i + 1 << ". ";
            m_zbroje.at(i)->infoInventory();
            if(EQzbroj[1] == m_zbroje.at(i)){
                std::cout << " (nasazeno)";
            }
            std::cout << std::endl;
        }

    }
    std::cout << "Penize: " << getPenize() << std::endl;
}

void Hrac::spanek() {
    if(m_zivot < 80){
        m_zivot += 20;
        std::cout << " a doplnil se ti zivot o 20" << std::endl;
        std::cout << "aktualni zivot " << m_zivot << std::endl;

    }
    else if(m_zivot >= 80 && m_zivot < 100){
        m_zivot += 20;
        std::cout << " a doplnil se ti zivot na maximum" << std::endl;
        if(m_zivot > 100){
            m_zivot = 100;
        }
        std::cout << "aktualni zivot " << m_zivot << std::endl;
    }

}