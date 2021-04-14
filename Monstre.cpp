#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <iostream>


Monstre::Monstre():_pvMonstre(), _attaqueMonstre(20), _fatigueMonstre(false){}

void Monstre:: afficheMonstre(){
    std :: cout << "PV : " << _pvMonstre << "Attaque : " << _attaqueMonstre << "Fatigué : " << _fatigueMonstre << std:: endl;
}

int Monstre :: getPV(){
    std:: cout << "Combien de PV possede votre Monstre ?" << std:: endl;
    std:: cin >> _pvMonstre;
    return _pvMonstre;
}

/*int Monstre:: getAttaque(){ // Pour l'instant cette fonction ne marche pas, je n'arrive pas à faire ce que je veux mettre en place, c'est à dire faire choisir au joueur d'attaquer ou non
    std:: cout << "Voulez-vous attaquer(1) ou passer votre tour ?(2) " << std:: endl;
    std:: cin >> ; //votrechoix
    if(1){
        _fatigueMonstre = true;
        return _attaqueMonstre;
    }

    else if (2){
        return false;
    }
    
}*/

bool Monstre:: getFatigue(){
    if(_fatigueMonstre == false){
        std:: cout << "Votre monstre peut attaquer !" << std:: endl;
        return false;
    }

    else if (_fatigueMonstre == true){
        std::cout << "Votre monstre est fatigué, il doit se reposer avant d'attaquer !" << std:: endl;
        return true;
    }
}

bool Monstre:: testVictoireMonstre(){
    if (_pvMonstre == 0){
        std:: cout << "Le monstre est mort" << std:: endl;
        return true; 
    }
    else {
        return false;
    }
}
#endif