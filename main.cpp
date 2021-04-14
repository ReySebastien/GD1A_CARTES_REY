
#include "Monstre.cpp"
#include "Mage.cpp"
#include <iostream>
#include <string>


int main(){

    bool victoireMonstre = false;
    Monstre * monstre; 
    
    while(!victoireMonstre){



        monstre -> getPV();
        monstre -> getFatigue();
        monstre -> afficheMonstre();

    }

















    return 0;
}