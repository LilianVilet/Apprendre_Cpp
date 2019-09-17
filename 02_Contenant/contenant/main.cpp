#include <iostream>
#include "carton.h"
#include "caissedebouteilles.h"


using namespace std;

int main()
{
    carton unCarton (20,10,50,12);
    cout << "volume du carton : " << unCarton.calculerVolume()/100 << "cm3" << endl;
    cout << "Poids du carton : " << unCarton.obtenirPoidsMaxi()/100 << "kg" << endl;
    return 0;
}
