//
// Created by Vojta on 14.12.2020.
//

#include "ObchodZbrane.h"

ObchodZbrane::ObchodZbrane(std::string nazev):Obchod(nazev) {}

void ObchodZbrane::pridejZboziw(Zbran* zbran){
    m_zbrane.push_back(zbran);
}
void ObchodZbrane::vypisZbozi(){
    for (int i = 0; i < m_zbrane.size(); i++) {
        std::cout << i+1 << ". ";
        if(m_zbrane.at(i) == nullptr){
            std::cout << "vyprodano" << std::endl;
        }
        else{
            m_zbrane.at(i)->printInfo();
        }

    }
}
void ObchodZbrane::printInfo() {
    std::cout << "Lepsi bojovat zbranemi, jak holyma rukama" << std::endl;
}
void ObchodZbrane::nazevLokace() {
    std::cout << getNazev() << std::endl;
}

void ObchodZbrane::ukazVolby(){
    std::cout << "1. vypsani zbozi" << std::endl;
    std::cout << "2 (cislo zbozi). koupit zbozi" << std::endl;
}

void ObchodZbrane::koupit(Hrac* hrac, int jake){
    if(m_zbrane.at(jake) != nullptr) {

        if (hrac->getPenize() >= m_zbrane.at(jake)->getCena()) {
            hrac->kupZbran(jake, m_zbrane);
            std::cout << "Koupil jsi ";
            m_zbrane.at(jake)->getJmeno();
            m_zbrane.at(jake) = nullptr;
        } else {
            std::cout << "Nemas dostatek penez" << std::endl;
        }
    }
    else{
        std::cout << "Zbozi neni na sklade" << std::endl;
    }
}




void  ObchodZbrane::pridejZbozia(Zbroj* zbroj){}