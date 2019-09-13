#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include "menu.h"

/**
  * @file       main.cpp
  * @brief      Implémentation de la classe Menu
  * @version    1.1
  * @author     Lilian VILET
  * @date       13 sept 2019
  */

using namespace std;

/**
 * @brief main
 * @details Fonction principale qui ouvre le menu texte,
 *      appelle la fonction Afficher,
 *      propose les 4 cas des quatres options,
 *      pour finalement appeller la fonction AttendreAppuiTouche
 * @return
 */
int main()
{
    int choix;
    menu leMenu("menu.txt");
    //leMenu.Afficher();
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous avez choisi l'option n°1" << endl;
            menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous avez choisi l'option n°2" << endl;
            menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            cout << "Vous avez choisi l'option n°3" << endl;
            menu::AttendreAppuiTouche();
            break;
        case OPTION_4:
            cout << "Vous avez choisi l'option n°4" << endl;
            menu::AttendreAppuiTouche();
            break;
        }
    }while(choix != QUITTER);
    return 0;
    }
