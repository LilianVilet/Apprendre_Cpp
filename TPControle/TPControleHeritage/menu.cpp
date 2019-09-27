#include "menu.h"

using namespace std;



Menu::Menu(const string &_nom)
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
    options = new string [nbOptions];
    }
for (unsigned int i=0; i < nbOptions; i++) {
std::getline(fichierMenu,options[i]);
if (options[i].length()>longueurMax){
longueurMax = (options[i].length());
}
}
}



Menu::~Menu()
{
    delete [] options;
}



int Menu::Afficher()
{
    int choix;

    if(nbOptions == 0)
        choix = -1;
    else {

   cout << setfill('-');
    cout << "+-" << setw(4) << "-+-" << setw(longueurMax+2)<<"-+"<<endl;
    cout << setfill(' ');
    for (unsigned int i=0; i < nbOptions ; i++){
     cout << "| " << i+1 << " | " << options[i] << " |" << endl;
 }
    cout << setfill('-');
cout << "+-" << setw(4) << "-+-" << setw(longueurMax+2)<<"-+"<<endl;
cout << setfill(' ');
do{
    cout << "votre choix entre 1 et "<<nbOptions<<" :" << endl;
    cin >> choix;
}while(choix > nbOptions);

    }
return choix;
}




void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("clear");
}
