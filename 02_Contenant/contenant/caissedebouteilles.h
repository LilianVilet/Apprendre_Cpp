#ifndef CAISSEDEBOUTEILLES_H
#define CAISSEDEBOUTEILLES_H
#include "contenant.h"

class caisseDeBouteilles : public contenant
{
public:
    caisseDeBouteilles(const int _largeur, const int _hauteur, const int _profondeur,const int _nbBouteilles,const int _contenance);
    ~caisseDeBouteilles();
    int calculerVolume();
private:
    int nbBouteilles;
    int contenance;
};

#endif // CAISSEDEBOUTEILLES_H
