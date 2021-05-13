//
// Created by Vojta on 22.01.2021.
//

#include "Nepritel.h"

Nepritel::Nepritel(std::string jmeno, int zivot, int utok, int obrana, int penize){
    m_jmeno = jmeno;
    m_zivot = zivot;
    m_utok = utok;
    m_obrana = obrana;
    m_penize = penize;
}

void Nepritel::getJmeno(){
    std::cout << m_jmeno;
}
int Nepritel::getZivot() {
    return m_zivot;
}
int Nepritel::getUtok(){
    return m_utok;
}
int Nepritel::getObrana(){
    return m_obrana;
}
int Nepritel::getPenize(){
    return m_penize;
}
void Nepritel::printInfo() {
    std::cout << "Jmeno: " << m_jmeno << std::endl;
    std::cout << "zivoty: " << m_zivot << std::endl;
    std::cout << "utok: " << m_utok << std::endl;
    std::cout << "obrana: " << m_obrana << std::endl;
    std::cout << "odmena: " << m_penize << std::endl;
}