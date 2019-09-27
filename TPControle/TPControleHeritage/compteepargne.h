#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "compte.h"
#include <iostream>

using namespace std;

class CompteEpargne: public Compte
{
private:
    float tauxInteret=1.5;
public:
    CompteEpargne(const float montant_initial,float _tauxInteret);
    void CalculerInterets();
};

#endif // COMPTEEPARGNE_H
