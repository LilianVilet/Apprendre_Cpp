#include "caissedebouteilles.h"
#include <iostream>

using namespace std;

caisseDeBouteilles::caisseDeBouteilles(const int _largeur, const int _hauteur, const int _profondeur, const int _nbBouteilles, const int _contenance):
    contenant(_largeur,_hauteur, _profondeur),
    nbBouteilles(_nbBouteilles),
    contenance(_contenance)
{
    cout << "constructeur de la classe caisseDeBouteilles" << endl;
    cout << "Largeur" <<largeur<< endl;
    cout << "Hauteur" <<hauteur<< endl;
    cout << "Profondeur" <<profondeur<< endl;
}

caisseDeBouteilles::~caisseDeBouteilles()
{

}

int caisseDeBouteilles::calculerVolume()
{
    return 0;
}
