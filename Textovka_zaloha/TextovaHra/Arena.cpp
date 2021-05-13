//
// Created by Vojta on 13.12.2020.
//

#include "Arena.h"
#include "iostream"
Arena::Arena(std::string nazev):Lokace(nazev){

}
int m_protivnik = 0;


void Arena::printInfo() {
    std::cout << "Obrovske koloseum, divas se jak dav sili, je otazkou casu, kdy se ti nekdo postavi." << std::endl;
}
void Arena::nazevLokace(){
    std::cout << getNazev() << std::endl;
}
void Arena::ukazVolby(){
    std::cout << "1. Zobrazit protivnika" << std::endl;
    std::cout << "2. Bojuj" << std::endl;
}
void Arena::volba1(){
    std::cout <<"Pred tebou stoji protivnik jmenem ";
    m_nepratele.at(m_protivnik)->getJmeno();
    std::cout << std::endl;

    std::cout << "\t";
    m_nepratele.at(m_protivnik)->getJmeno();
    std::cout << "\t";
    m_hrac->getJmeno();
    std::cout << std::endl;

    std::cout << "Zivot \t";
    std::cout << m_nepratele.at(m_protivnik)->getZivot();
    std::cout << "\t";
    std::cout << m_hrac->getZivot();
    std::cout << std::endl;

    std::cout << "Utok \t";
    std::cout << m_nepratele.at(m_protivnik)->getUtok();
    std::cout << "\t";
    std::cout << m_hrac->getUtok();
    std::cout << std::endl;

    std::cout << "Obrana \t";
    std::cout << m_nepratele.at(m_protivnik)->getObrana();
    std::cout << "\t";
    std::cout << m_hrac->getObrana();
    std::cout << std::endl;
}
void Arena::volba2(){

m_souboj->bojuj(m_nepratele.at(m_protivnik));

if(m_souboj->setPorazen(1)){
    m_protivnik++;

    if(m_protivnik == m_nepratele.size()){
        m_souboj->konec(m_hrac);
    }

    ukazVolby();

}


}
void Arena::volba3(){


}
void Arena::volba4(Hrac* hrac){
    m_hrac = hrac;
    m_souboj = new Souboj(m_hrac);
}
void Arena::volba5(Nepritel* nepritel){
    m_nepratele.push_back(nepritel);
}
