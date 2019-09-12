#include "menu.h"
#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

menu::menu(const string &_nom)
{
    int nbLignes;
  nom = _nom;
ifstream fichierMenu(nom.c_str());
if (fichierMenu.fail()){
    cerr << "erreur lors de l'ouverture du fichier" <<nom << endl;
    nbOptions=0;
}else {
    nbLignes=static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
    // allocation dynamique du tableau
    nbOptions=nbLignes;
    fichierMenu.seekg(0,ios::beg);
    //retour au debut du fichier
    option = new string [nbOptions];
    }
for (unsigned int i=1; i < nbOptions; i++) {
std::getline(fichierMenu,option[i]);
if (option[i].length()>longueurMax){
longueurMax = (option[i].length());
}
}
}

menu::~menu()
{
    delete option;
}

int menu::afficher()
{
    int choix;

    if(nbOptions == 0)
        choix = -1;
    else {
//cout << "+" << setfill('-') << setw(5) << "+" <<setfill(' ')<< setfill('-') << setw(longueurMax+2) << "+" << endl;
   cout << setfill('-');
    cout << "+-" << setw(5) << "-+-" << setw(longueurMax+2)<<"-+"<<endl;
    cout << setfill(' ');
    for (unsigned int i=1; i <nbOptions; i++){
     cout << "| " << i << " | " << option[i] << " |" << endl;
 }
    cout << setfill('-');
cout << "+" << setw(5) << "-+-" << setw(longueurMax+2)<<"+"<<endl;
cout << setfill(' ');
cin >> choix;
    }
return choix;
}

void menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("clear");
}
