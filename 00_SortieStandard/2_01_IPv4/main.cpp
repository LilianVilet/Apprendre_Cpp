#include <iostream>
#include <ipv4.h>
using namespace std;

void AfficherTableau(unsigned char *tab){
    for (int indice=0;indice<4;indice++) {
        cout << (int) tab[indice];
        if(indice < 3)
            cout << ".";

    }
    cout << endl;
}

int main()
{
    unsigned char adresse[4]= {192,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];

    ipv4 uneAdresse(adresse,24);

    cout << "adresse IPv4: ";
    AfficherTableau(adresse);
    uneAdresse.ObtenirMasque(masque);
    cout << "Masque: ";
    AfficherTableau(masque);
    uneAdresse.ObtenirAdresseReseau(reseau);
    cout << "Réseau: ";
    AfficherTableau(reseau);
    uneAdresse.ObtenirAdresseDiffusion(masque);
    cout << "Diffusion: ";
    AfficherTableau(diffusion);
    /*add1.ObtenirMasque(masque);

    cout << static_cast<int>(masque[0]) << "." << static_cast<int> (masque[1]) << ".";
    cout << static_cast<int>(masque[2]) << "." << static_cast<int> (masque[3]) << ".";*/


    return 0;
}


