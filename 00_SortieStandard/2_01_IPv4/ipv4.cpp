#include "ipv4.h"

/**
 * @brief ipv4::CalculerMasque
 * @details Calcul le masque du réseau à partir du CIDR
 * @param _cidr entier sur 8 bits
 */
void ipv4::CalculerMasque(unsigned char _cidr)
{
    int indice;
    for (int indice = 0; indice < 4; indice++)
        masque[indice] = 0;
    indice = 0;
    while (_cidr >= 8)
    {
        masque[indice++] = 255;
        _cidr -=8;
    }
    unsigned char puissance = 255;
    while(_cidr-- >0)
    {
        masque[indice] += puissance;
        puissance /=2;
    }


}

/**
 * @brief ipv4::ipv4
 * @details Constructeur de la classe, initialise l'adresse et le masque
 * @param _adresse Adresse IPv4
 * @param _cidr valeur derrière le / de l'adresse
 */
ipv4::ipv4(const unsigned char *_adresse, const unsigned char _cidr)
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
    for (int indice = 0; indice < 4; indice++)
        adresse[indice] = _adresse[indice];
    if(_cidr <= 32)
        CalculerMasque(_cidr);


}
/**
 * @brief ipv4::ipv4
 * @details Constructeur de la classe, initialise l'adresse et le masque
 * @param _adresse Adresse IPv4
 * @param _cidr Masque du réseau
 */

ipv4::ipv4(const unsigned char *_adresse, const unsigned char *_masque)
{
    adresse = new unsigned char [4];
    masque = new unsigned char [4];
    for (int indice = 0; indice < 4; indice++)
    {
        adresse[indice] = _adresse[indice];
        masque[indice] = _masque[indice];
    }
}
/**
 * @brief ipv4::~ipv4
 * @details Destructeur de la classe, libère la mémoire allouée
 */

ipv4::~ipv4()
{
    delete [] adresse;
    delete [] masque;
}

void ipv4::ObtenirMasque(unsigned char *_masque)
{
    for (int indice=0; indice <4; indice++)
        _masque[indice] = masque[indice];
}

void ipv4::ObtenirAdresseReseau(unsigned char *_reseau)
{
    for (int indice=0; indice <4; indice++)
        _reseau[indice] = adresse[indice] & masque[indice];
}

void ipv4::ObtenirAdresseDiffusion(unsigned char *_diffusion)
{
    unsigned char adresseDuReseau[4];
    ObtenirAdresseReseau(adresseDuReseau);
    for(int indice = 0 ; indice < 4 ; indice++)
        _diffusion[indice] = adresseDuReseau[indice] | ~masque[indice];

}

