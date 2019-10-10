#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>

using namespace std;

class Element
{
protected:
    int numero;
    int vitesse;
public:
    Element(int _numero, int _vitesse);
    virtual ~Element();
    virtual void Afficher() = 0;

    virtual void ObtenirLongueur();
    virtual void ObtenirDuree();
    virtual void ObtenirVecteurArivee();
};

#endif // ELEMENT_H
