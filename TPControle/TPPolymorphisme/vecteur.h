#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
using namespace std;

class Vecteur
{
private:
    double x;
    double y;
public:
    Vecteur(const double _x, const string _y);
    Vecteur operator+(const string _autre);
    Vecteur operator-(const string _autre);
    void Afficher();
    void setX(const double _x);
    double getX();
    void setY(const double _y);
    double getY();
};

#endif // VECTEUR_H
