#include <iostream>
#include "trajectoire.h"
#include "element.h"
#include "segment.h"
#include "vecteur.h"

using namespace std;

int main()
{
    Trajectoire laTrajectoire(0);


    Segment leSegment(0, 3, 9, 0);
    Segment leSegment2(0, 1, 5, 0.927295);

    laTrajectoire.Afficher();

    leSegment.Afficher();


    leSegment2.Afficher();



    return 0;
}
