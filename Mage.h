#ifndef MAGE_H
#define MAGE_H

#include <string>


class Mage{

    private:

        std:: string _nomMage;
        int _pvMage;
        void _zoneDeJeu;
        int _manaMage;

    public:

        Mage();
        void afficheMage();
        void afficheZoneDeJeu();
        //void ajoutMonstre(); cette fonction devient inutile une fois la pioche implémentée
        void piocheMonstre();
        void attaqueAdversaire();
        bool testVictoireMage();
        int updateMana();
        void jouCarte();
        void finTour();
};















#endif