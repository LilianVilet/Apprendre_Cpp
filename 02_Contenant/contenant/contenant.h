#ifndef CONTENANT_H
#define CONTENANT_H


class contenant
{
public:
    contenant(const int _largeur, const int _hauteur, const int _profondeur);
    ~contenant();
    int calculerVolume();
protected:
    int largeur;
    int hauteur;
    int profondeur;
};

#endif // CONTENANT_H
