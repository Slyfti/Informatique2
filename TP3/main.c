#include <stdio.h>
#include "puissance4.h"

int main(){
    printf("C'est le puissance 4 ! \n");
    int** maGrille = allouer(4);
    initialiser(maGrille,4);
    afficher(maGrille,4);
    tourDeJeu(maGrille,4);
    return 0;
}
