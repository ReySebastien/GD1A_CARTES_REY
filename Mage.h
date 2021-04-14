#ifndef MAGE_H
#define MAGE_H

#include <string>


class Mage{

    private:

        std:: string _nomMage;
        int _pvMage;
        void _zoneDeJeu;

    public:

        Mage();
        void afficheMage();
        void afficheZoneDeJeu(_zoneDeJeu);
        void ajoutMonstre();
        void attaqueAdversaire();
        bool TestVictoireMage();
};















#endif