#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include <iostream>
#include "element.h"

using namespace std;

class Trajectoire
{
private:
    Element **parcours;
    int nbEtapesMax;
    int prochaineEtape;
public:
    Trajectoire(const int _nbEtapesMax);
    ~Trajectoire();
    bool Ajouter(Element *pElement);
    void Afficher();
};

#endif // TRAJECTOIRE_H
