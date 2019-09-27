#ifndef COMPTE_H
#define COMPTE_H
#include <iostream>

using namespace std;

class Compte
{
protected:
    float solde;
public:
    Compte();
    ~Compte();
    void ConsulterSolde();
    void Deposer(float _montant);
    void Retirer(float _montant);
    Compte(const float _montant_initial);
};

#endif // COMPTE_H
