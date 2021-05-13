//
// Created by Vojta on 03.12.2020.
//

#include "Lokace.h"

Lokace::Lokace(std::string nazev){
    m_nazev = nazev;
}
std::string Lokace::getNazev(){
    return m_nazev;
}
