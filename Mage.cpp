#ifndef MAGE_CPP
#define MAGE_CPP

#include "Mage.h"
#include "Monstre.h"
#include <iostream>

Mage::Mage():_nomMage("Kaelthas"), _pvMage(100), _zoneDeJeu(), _manaMage(10){}

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
    std:: cout << "Voulez-vous attaquer(1) ou passer votre tour ?(2) " << std:: endl;
    std:: cin >> ; //votrechoix
    if (1){
        //le mage attaque
    }
    Else {
        Mage.finTour();
    }
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

void Mage:: piocheMonstre(){

}

int Mage:: updateMana(){

}

void Mage:: jouCarte(){ //Je n'ai pas eu le temps d'implémenter le coût en mana des cartes, cependant ma fonction est là pour retirer le coût en mana des cartes du mana du Mage
    _manaMage = _manaMage - manaCarte;

if (_manaMage == 0){
    std:: cout << "Vous n'avez plus de mana" << std::endl;
    Mage.finTour();
}
}

void Mage:: finTour(){ // Le mana se remet à 10 à la fin du tour et le compteur tour prend +1 (cependant il n'est pas déclaré pour l'instant)
    _manaMage = 10;
    tour++;
}
#endif;