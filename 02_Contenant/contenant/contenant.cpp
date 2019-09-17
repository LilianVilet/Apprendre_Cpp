#include "contenant.h"
#include <iostream>

using namespace std;

contenant::contenant(const int _largeur, const int _hauteur, const int _profondeur):
    largeur(_largeur),
    hauteur(_hauteur),
    profondeur(_profondeur)
{
    cout << "constructeur de la classe contenant" << endl;
}
contenant::~contenant()
{
    cout << "destructeur de la classe contenant" << endl;
}


int contenant::calculerVolume()
{
    return largeur * hauteur * profondeur;
}

