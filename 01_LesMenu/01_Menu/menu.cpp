#include "menu.h"
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

/**
  * @file       menu.cpp
  * @brief      Implémentation de la classe Menu
  * @version    1.1
  * @author     Lilian VILET
  * @date       13 sept 2019
  */

using namespace std;

/**
 * @brief menu::menu
 * @details Constructeur de la classe menu,
 *      contient les items du menu
 * @param _nom du fichier
 * @param longueurMax d'une option
 */
menu::menu(const string &_nom):nom(_nom), longueurMax(0)
{
    string nomDuFichier;

    ifstream leFichier(nom.c_str());

    if(!leFichier .is_open())
    {
        cerr << "Erreur d'ouverture du fichier : " << nom << endl;
        nbOptions=0;
    }else
    {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(leFichier),istreambuf_iterator<char>(),'\n'));
        leFichier.seekg(0,ios::beg);
        options = new string [nbOptions];
        for(int indice=0;indice<nbOptions;indice++)
        {
            getline(leFichier,options[indice]);
            if(static_cast<int>(options[indice].length())>longueurMax)
            {
                longueurMax = static_cast<int>(options[indice].length());
            }
        }
    }
}

/**
 * @brief menu::~menu
 * @details Destructeur de la classe,
 *      libère la mémoire du constructeur
 */
menu::~menu()
{
    delete [] options ;
}

/**
 * @brief menu::Afficher
 * @details Fonction qui permet d'afficher le menu,
 *      ainsi que d'éffectuer le choix du menu
 * @return
 */
int menu::Afficher()
{
    cout << "+" << setfill('-') << setw(6) << "+"  << setfill(' ') << setfill('-') << setw(11) << "+" << endl;
    for (int indice=0; indice<nbOptions-1; indice++)
    {
        cout << "|" << setw(5) << setfill(' ') << indice+1 << "| " << options[indice] << setfill(' ') << setw(2) << "|" << endl;
    }
    cout << "+" << setfill('-') << setw(6) << "+"  << setfill(' ') << setfill('-') << setw(11) << "+" << endl;
    //
    //
    //
    int choix;

    do{
        cout << "Entrer un nombre entre 1 et 5 : " << endl;
        cin >> choix;
        /*if (choix != 0 || 1 || 2 || 3 || 4 || 5 ){
            cout << '\n' << "Erreur" << '\n' << endl;
        }*/
    }while(choix > nbOptions);

    return choix;
}

/**
 * @brief menu::AttendreAppuiTouche
 * @details Fonction qui attend que l'on appui sur la touche Entrée,
 *      le buffer d'entrée est vidé
 */
void menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    // Vidage du tampon d'entrée
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");
}
