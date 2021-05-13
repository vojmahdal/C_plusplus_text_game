//
// Created by Vojta on 20.01.2021.
//

#include "Zbran.h"

Zbran::Zbran(std::string nazev, int cena, int bonusUtoku){
    m_nazev = nazev;
    m_cena = cena;
    m_bonusUtoku = bonusUtoku;
}
int Zbran::getBonusUtoku(){
    return m_bonusUtoku;
}
int Zbran::getCena(){
    return m_cena;
}
void Zbran::getJmeno() {
    std::cout << m_nazev << std::endl;
}
void Zbran::printInfo(){
    std::cout << m_nazev <<" bonus utoku: " << getBonusUtoku() << " cena: " << getCena()  << std::endl;
}
void Zbran::infoInventory(){
    std::cout << m_nazev <<" bonus utoku: " << getBonusUtoku();
}