#ifndef MENU_H
#define MENU_H
#include <string>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>

class menu
{
private:
    std::string nom;
    std::string *option;
    int nbOptions;
    size_t longueurMax;
public:
    menu(const std::string &_nom);
    ~menu();
    int afficher();
    static void AttendreAppuiTouche();
};

#endif // MENU_H
