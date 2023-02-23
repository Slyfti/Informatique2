#define N 7
#include <stdio.h>
#include "puissance4.h"


int main(){
    printf("C'est le puissance 4 ! \n");
    int** maGrille = allouer(N);
    initialiser(maGrille,N);
    afficher(maGrille,N);
    tourDeJeu(maGrille,N);
    libere(maGrille,N);
    return 0;
}
