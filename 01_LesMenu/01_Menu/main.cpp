#include <iostream>
#include "menu.h"

using namespace std;

int main()
{
    int choix;
    menu leMenu("menu.txt");
    choix = leMenu.afficher();
    cout << "vous avez choisi l'option : " << choix << endl;
    return 0;
}
