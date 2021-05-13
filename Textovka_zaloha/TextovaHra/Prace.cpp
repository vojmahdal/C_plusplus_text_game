//
// Created by Vojta on 12.12.2020.
//

#include <iostream>
#include "Prace.h"

Prace::Prace(std::string nazev):Lokace(nazev){}
void Prace::printInfo(){
    std::cout << "Prace, kde se tezce nadres pro minimum" << std::endl;
}

void Prace::nazevLokace(){
    std::cout << getNazev() << std::endl;
}


void Prace::ukazVolby(){
    std::cout <<"1. zahaji praci" << std::endl;
}
void Prace::volba1(){
    std::string m_pracuju = "";
    std::cout << "napis 1x miluji svou praci" << std::endl;
    int i = 0;
    while(i < 1) {
        getline(std::cin, m_pracuju);
        if(m_pracuju == "miluji svou praci"){
            i++;
        }
        else{
            std::cout << "pracujes spatne, zkus to znovu! " << std::endl;
        }
    }
    std::cout << "dodelal jsi tezkou praci!" << std::endl;
}
void Prace::volba2(){

}
void Prace::volba3(){

}
void Prace::volba4(Hrac* hrac){

}
void Prace::volba5(Nepritel* nepritel){

}