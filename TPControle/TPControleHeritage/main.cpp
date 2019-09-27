#include <iostream>
#include "menu.h"
#include "compte.h"
#include "compteepargne.h"

using namespace std;

int main()
{

CompteEpargne leCompteEpargne(0, 1.5);
    int choix;
       Menu leMenuPrincipal("menuPrincipal.txt");
       Menu leMenuCompteDepot("menuCompteDepot.txt");
       Menu leMenuCompteEpargne("menuCompteEpargne.txt");
       float montant;
       Compte * compteDepot;
       compteDepot = new Compte ();


       do{
           choix = leMenuPrincipal.Afficher();
           switch(choix)
           {
          case OPTION_1:
             cout << "Vous avez choisi l'option Compte de dépôt" << endl;
             choix=0;
             do{
                 choix = leMenuCompteDepot.Afficher();
                 switch(choix){
                 case 1:
                     cout << "Vous avez choisi l'option de consultation de Solde"<<endl;
                     compteDepot->ConsulterSolde();
                     Menu::AttendreAppuiTouche();
                     break;
                 case 2:
                     cout << "vous avez choisi l'option Dépôt" << endl;
                     compteDepot->Deposer(montant);
                     Menu::AttendreAppuiTouche();
                     break;

                 case 3:
                     cout <<"vous avez choisi l'option Retrait"<<endl;
                     compteDepot->Retirer(montant);
                     Menu::AttendreAppuiTouche();
                     break;
                 case 4:
                     cout << "vous avez choisi l'option Quitter"<<endl;
                     Menu::AttendreAppuiTouche();
                     break;
                 }
             }while(choix != OPTION_4);
             break;


           case OPTION_2:
               cout << "Vous avez choisi l'option Compte d'Epargne" << endl;
               choix=0;
               do{
                   choix = leMenuCompteEpargne.Afficher();
                   switch(choix){
                   case 1:
                       cout << "Vous avez choisi l'option de consultation de Solde"<<endl;
                       leCompteEpargne.ConsulterSolde();
                       Menu::AttendreAppuiTouche();
                       break;
                   case 2:
                       cout << "vous avez choisi l'option Dépôt" << endl;
                       leCompteEpargne.Deposer(montant);
                       Menu::AttendreAppuiTouche();
                       break;

                   case 3:
                       cout <<"vous avez choisi l'option Retrait"<<endl;
                       leCompteEpargne.Retirer(montant);
                       Menu::AttendreAppuiTouche();
                       break;
                   case 4:
                       cout << "vous avez choisi l'option Calcul d'interet"<<endl;
                       leCompteEpargne.CalculerInterets();
                       Menu::AttendreAppuiTouche();
                       break;
                   case 5:
                       cout << "vous avez choisi l'option Quitter"<<endl;
                       Menu::AttendreAppuiTouche();
                       break;
                   }
               }while(choix != QUITTER);

           break;


           case QUITTER:
               cout << "Vous avez choisi l'option Quitter" << endl;

           break;
           }
       }while(choix != OPTION_3 );
    return 0;
}
