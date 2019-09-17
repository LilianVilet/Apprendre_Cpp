#include "carton.h"
#include <iostream>

using namespace std;

carton::carton(const int _largeur, const int _hauteur, const int _profondeur, const float _poidsMaxi):
    contenant(_largeur,_hauteur, _profondeur),
    poidsMaxi(_poidsMaxi)
{
    cout << "constructeur de la classe Carton" << endl;
    cout << "Largeur" <<largeur<< endl;
    cout << "Hauteur" <<hauteur<< endl;
    cout << "Profondeur" <<profondeur<< endl;
}

carton::~carton()
{
    cout << "detructeur de la classe Carton" << endl;
}

float carton::obtenirPoidsMaxi()
{
    return poidsMaxi;
}

