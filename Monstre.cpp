#ifndef MONSTRE_CPP
#define MONSTRE_CPP

#include "Monstre.h"
#include <iostream>


Monstre::Monstre():_pvMonstre(), _attaqueMonstre(20), _fatigueMonstre(false){}

void Monstre:: afficheMonstre(){
    std :: cout << "PV : " << _pvMonstre << "Attaque : " << _attaqueMonstre << "Fatigué : " << _fatigueMonstre << std:: endl;
}

int Monstre :: getPV(){
    std:: cout << "Combien de PV possède votre Monstre ?" << std:: endl;
    std:: cin >> _pvMonstre;
    return _pvMonstre;
}

int Monstre:: getAttaque(){
    std:: cout << "Voulez-vous attaquer(1) ou passer votre tour ?(2) " << std:: endl;
    //std:: cin >> ;
    return _attaqueMonstre;
}

bool Monstre:: getFatigue(){
    if(_fatigueMonstre == false){
        
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