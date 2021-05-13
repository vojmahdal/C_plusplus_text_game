//
// Created by Vojta on 22.01.2021.
//

#include "Souboj.h"

Souboj::Souboj(Hrac* hrac){
    m_hrac = hrac;
}
int m_porazeny;

void Souboj::bojuj(Nepritel* nepritel){
    m_porazeny = 0;
    m_nepritel = nepritel;
    int m_HracUtok = m_hrac->getUtok();
    int m_nepritelZivot = m_nepritel->getZivot();
    int m_nepritelCena = m_nepritel->getPenize();
    int m_hracZivot = m_hrac->getZivot();

    int hit;
    int nepritelhit;

    srand(time(nullptr));

    std::cout << "1. zacit bojovat " << std::endl;
    std::cout << "2. utect " << std::endl;
   // int utokHrac;
    std::string vstup;
    getline (std::cin, vstup);
    while(vstup != "2"){
        if(vstup == "1"){
            std::cout << "___________________________" << std::endl;
            std::cout << "utocis na nepritele jmenem ";
            m_nepritel->getJmeno();
            std::cout << " se zivoty " << m_nepritelZivot << std::endl;


            hit = rand() % 10 + 1;
            nepritelhit = rand() % 10 + 1;


            if(hit > 4){
                std::cout << "Utok za ";

                if((m_HracUtok - m_nepritel->getObrana()) < 0){
                    m_hracZivot = m_hracZivot - 3;
                    std::cout << "3";
                }
                else{
                    m_nepritelZivot = m_nepritelZivot - (m_HracUtok - m_nepritel->getObrana());
                    std::cout << m_HracUtok-m_nepritel->getObrana();
                }



                std::cout << " bodu" << std::endl;
            }
            else if(hit <= 4 && hit > 2){
                m_nepritelZivot = m_nepritelZivot - m_HracUtok;
                std::cout << "Kriticky utok za ";
                std::cout << m_HracUtok;
                std::cout << " bodu" << std::endl;
            }
            else{
                std::cout << "Minul jsi" << std::endl;
            }
            std::cout << "-------------" << std::endl;


            //pro nepritele

            if(nepritelhit > 4){

                m_nepritel->getJmeno();
                std::cout << " ti ubral ";

                if((m_nepritel->getUtok() - m_hrac->getObrana()) < 0){
                    m_hracZivot = m_hracZivot - 3;
                    std::cout << " 3 zivotu" << std::endl;
                }
                else{
                    m_hracZivot = m_hracZivot - (m_nepritel->getUtok() - m_hrac->getObrana());
                    std::cout << (m_nepritel->getUtok() - m_hrac->getObrana());
                    std::cout << " zivotu" << std::endl;
                }


            }
            else if(nepritelhit <= 4 && hit > 2){

                m_hracZivot = m_hracZivot - m_nepritel->getUtok();
                m_nepritel->getJmeno();
                std::cout << " ti kriticky ubral ";
                std::cout << m_nepritel->getUtok();
                std::cout << " zivotu" << std::endl;
            }
            else{
                m_nepritel->getJmeno();
                std::cout << " minul" << std::endl;
            }


        }
        if(m_nepritelZivot > 0){
            std::cout << "\t";
            m_hrac->getJmeno();
            std::cout << "\t";
            m_nepritel->getJmeno();
            std::cout << std::endl;

            std::cout << "Zivot \t";
            std::cout << m_hracZivot;

            std::cout << "\t";
            std::cout << m_nepritelZivot;
            std::cout << std::endl;

            std::cout << "Utok \t";
            std::cout << m_hrac->getUtok();
            std::cout << "\t";

            std::cout << m_nepritel->getUtok();
            std::cout << std::endl;

            std::cout << "Obrana \t";
            std::cout << m_hrac->getObrana();

            std::cout << "\t";
            std::cout << m_nepritel->getObrana();
            std::cout << std::endl;

            std::cout << "___________________________" << std::endl;
            std::cout << "1. bojuj " << std::endl;
            std::cout << "2. vzdej se " << std::endl;
        }

        if (m_hracZivot <= 0){
            std::cout << "============================" << std::endl;
            std::cout << "Byl jsi porazen" << std::endl;
            m_hrac->prohratPenize(m_nepritelCena);
            m_hrac->setZivot(0);
            vstup = "2";
        }
        else if (m_nepritelZivot <= 0){
            std::cout << "============================" << std::endl;
            std::cout << "porazil jsi nepritele" << std::endl;
            m_hrac->vydelejPenize(m_nepritelCena);
            m_hrac->setZivot(m_hracZivot);
            setPorazen(m_porazeny++);
            vstup = "2";
        }
        else{
            getline (std::cin, vstup);
            if(vstup == "2"){
                //odebrani penez
                std::cout << "============================" << std::endl;
                std::cout << "vzdavas se " << std::endl;
                m_hrac->setZivot(m_hracZivot);
                m_hrac->vzdatSe(m_nepritelCena);
            }
        }
    }

    std::cout << "souboj skoncil" << std::endl;

}


int Souboj::setPorazen(int i){
    return m_porazeny;
}//bude obsahovat metodu s ukazatelem na Arenu(nejspis)

void Souboj::konec(Hrac *hrac) {
    m_hrac = hrac;
    std::cout << "Porazil jsi sampiona areny!" << std::endl;
    std::cout << "___________________________" << std::endl;
    std::cout << "Tve skore" << std::endl;
    m_hrac->vypisStatistiky();
    exit(0);
}