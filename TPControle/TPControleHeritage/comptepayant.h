#ifndef COMPTEPAYANT_H
#define COMPTEPAYANT_H

#include"compte.h"

class ComptePayant : public Compte
{
public:
    ComptePayant(const float _monstant_initial);
    ~ComptePayant();
    void Retirer(const float _montant);
    void Deposer(const float _montant);
};

#endif // COMPTEPAYANT_H
