//
// Created by Vojta on 12.12.2020.
//

#include <iostream>
#include "Domov.h"
Domov::Domov(std::string nazev):Lokace(nazev){

}
int m_datum = 1;
void Domov::printInfo(){
    std::cout << "Hnusna mistnost, kde je pouze neco, co pripomina postel" << std::endl;
}

void Domov::nazevLokace(){
    std::cout << getNazev() << std::endl;
}
void Domov::ukazVolby(){
    std::cout << "1. ukazat kalendar"<< std::endl;
    std::cout << "2. jit spat"<< std::endl;
    std::cout << "3. podivat se na cas"<< std::endl;
}
void Domov::volba1(){
    std::cout << "Dnes je to " << m_datum << ". den, co jsi se postavil na vlastni nohy" << std::endl;
}
void Domov::volba2(){
    m_datum++;
    std::cout << "Jdes spat ";
    //přičtení života
}
void Domov::volba3(){
    std::cout << "Musis jit do prace" << std::endl;
}
void Domov::volba4(Hrac* hrac){

}
void Domov::volba5(Nepritel* nepritel){

}