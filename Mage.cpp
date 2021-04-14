#ifndef MAGE_CPP
#define MAGE_CPP

#include "Mage.h"
#include <iostream>

Mage::Mage():_nomMage(), _pvMage(100), _zoneDeJeu(){}

void Mage:: afficheMage(){
    std :: cout << "Nom : " << _nomMage << "PV : " << _pvMage << "Zone de jeu : " << _zoneDeJeu << std:: endl;
}

void Mage:: afficheZoneDeJeu(){
    std:: cout << _zoneDeJeu << std::endl;
}

void Mage:: ajoutMonstre(){

}

void Mage:: attaqueAdversaire(){
    
}

bool Mage:: testVictoireMage(){

}














#endif;