#include "comptepayant.h"

ComptePayant::ComptePayant(const float _monstant_initial):
    Compte (_monstant_initial)
{
     cout << "constructeur de la classe ComptePayant"<< endl;
}

ComptePayant::~ComptePayant()
{
     cout << "destructeur de la classe ComptePayant"<< endl;
}

void ComptePayant::Retirer(const float _montant)
{

}

void ComptePayant::Deposer(const float _montant)
{

}
