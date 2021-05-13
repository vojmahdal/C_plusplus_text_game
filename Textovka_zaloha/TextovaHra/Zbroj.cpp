//
// Created by Vojta on 20.01.2021.
//

#include "Zbroj.h"

Zbroj::Zbroj(std::string nazev, int cena, int bonusObrany){
    m_nazev = nazev;
    m_cena = cena;
    m_bonusObrany = bonusObrany;
}
int Zbroj::getBonusObrany(){
    return m_bonusObrany;
}
int Zbroj::getCena(){
    return m_cena;
}
void Zbroj::getJmeno() {
    std::cout << m_nazev << std::endl;
}

void Zbroj::printInfo(){
    std::cout << m_nazev <<" bonus obrany: " << getBonusObrany() << " cena: " << getCena() << std::endl;
}
void Zbroj::infoInventory(){
    std::cout << m_nazev <<" bonus obrany: " << getBonusObrany();
}