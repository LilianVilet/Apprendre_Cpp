#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include <iostream>
#include "element.h"

using namespace std;

class Trajectoire
{
private:
    Element **lElement;
    int nbEtapesMax;
    int prochaineEtape;
public:
    Trajectoire(const int _nbEtapesMaxi);
    ~Trajectoire();
    bool Ajouter(const Element *_pElement);
    void Afficher();
};

#endif // TRAJECTOIRE_H
