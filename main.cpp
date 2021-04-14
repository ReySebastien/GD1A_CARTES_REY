
#include "Monstre.cpp"
#include "Mage.cpp"
#include <iostream>
#include <string>


int main(){

    //bool victoireMonstre = false;
   //Monstre * monstre; 
    bool victoireMage = false;
    Mage * mage;

    /*while(!victoireMonstre){ ceci était pour le premier exercice



        monstre -> getPV();
        monstre -> getFatigue();
        monstre -> afficheMonstre();

    }*/

    while (!victoireMage){

        mage -> afficheMage();
        mage -> piocheMonstre(); // Je n'ai pas eu le temps de définir le contenu de cette fonction donc cela ne fonctionnera pas
        mage -> jouCarte();
        mage -> attaqueAdversaire();
        mage -> finTour();
    }
















    return 0;
}