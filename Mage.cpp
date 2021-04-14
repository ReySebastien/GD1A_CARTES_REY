#ifndef MAGE_CPP
#define MAGE_CPP

#include "Mage.h"
#include "Monstre.h"
#include <iostream>

Mage::Mage():_nomMage(), _pvMage(100), _zoneDeJeu(){}

void Mage:: afficheMage(){
    std :: cout << "Nom : " << _nomMage << "PV : " << _pvMage << "Zone de jeu : " << _zoneDeJeu << std:: endl;
}

void Mage:: afficheZoneDeJeu(){
    std:: cout << _zoneDeJeu << std::endl;
}

/*void Mage:: ajoutMonstre(){ // Ici je veux faire appel à la classe monstre afin de créer un monstre via cette classe, cependant elle devient inutile une fois la pioche implémentée
    Monstre.getPV();
    Monstre.getAttaque();
}*/

void Mage:: attaqueAdversaire(){

}

bool Mage:: testVictoireMage(){
    if(_pvMage == 0){
        std:: cout << "Le Mage " << _nomMage << " est mort !" << std:: endl;
        return true;
    }
    else {
        return false;
    }
}














#endif;