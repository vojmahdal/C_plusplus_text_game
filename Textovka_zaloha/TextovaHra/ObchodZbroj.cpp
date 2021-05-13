//
// Created by Vojta on 14.12.2020.
//

#include "ObchodZbroj.h"

ObchodZbroj::ObchodZbroj(std::string nazev):Obchod(nazev) {}

void ObchodZbroj::pridejZbozia(Zbroj* zbroj){
    m_zbroje.push_back(zbroj);
}
void ObchodZbroj::vypisZbozi(){
    for (int i = 0; i < m_zbroje.size(); i++) {
        std::cout << i+1 << ". ";
        if(m_zbroje.at(i) == nullptr){
            std::cout << "vyprodano" << std::endl;
        }
        else{
            m_zbroje.at(i)->printInfo();
        }

    }
}
void ObchodZbroj::printInfo() {
    std::cout << "Nakup zbroj, co te nejen ochrani, ale take budes skvele vypadat" << std::endl;
}
void ObchodZbroj::nazevLokace() {
    std::cout << getNazev() << std::endl;
}

void ObchodZbroj::ukazVolby(){
    std::cout << "1. vypsani zbozi" << std::endl;
    std::cout << "2 (cislo zbozi). koupit zbozi" << std::endl;
}

void ObchodZbroj::koupit(Hrac* hrac, int jake){
    if(m_zbroje.at(jake) != nullptr) {

        if (hrac->getPenize() >= m_zbroje.at(jake)->getCena()) {
            hrac->kupZbroj(jake, m_zbroje);
            std::cout << "Koupil jsi ";
            m_zbroje.at(jake)->getJmeno();
            m_zbroje.at(jake) = nullptr;
        } else {
            std::cout << "Nemas dostatek penez" << std::endl;
        }
    }
    else{
        std::cout << "Zbozi neni na sklade" << std::endl;
    }
}

void ObchodZbroj::pridejZboziw(Zbran* zbran){}
