#include "element.h"

Element::Element(int _numero, int _vitesse):
    numero(_numero),
    vitesse(_vitesse)
{
    numero = 0;
}

Element::~Element()
{

}

void Element::ObtenirLongueur()
{
    //longueurTotale = longueur + longueur;
}

void Element::ObtenirDuree()
{
    int duree;
    //duree = longueur / vitesse;
    cout << "Durée totale du parcours = " << duree << endl;
}

void Element::ObtenirVecteurArivee()
{
    /*x = longueur * cos(angle);
    y = longueur * sin(angle);*/
}

void Element::Afficher()
{

}
