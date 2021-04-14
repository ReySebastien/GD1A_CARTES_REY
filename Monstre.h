#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>

class Monstre{

    private:

        int _pvMonstre;
        int _attaqueMonstre;
        bool _fatigueMonstre;

    public:

        Monstre();
        void afficheMonstre();
        int getPV();
        int getAttaque();
        bool getFatigue();
        bool testVictoireMonstre();

};
#endif