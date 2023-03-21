#include <stdio.h>
#include "fonctions.h"
#include "triLents.h"
#include "trisRapides.h"
#include <stdlib.h>
#include <time.h>
#define N 10
int main(){
    srand(time(NULL));
    printf("C'est le TD6 !\n");
    int* tab = allouer(N);
    initialiser(tab,N);

    afficher(tab,N);
    printf("\n");
    triRapide(tab,0,N-1);
    printf("\n");
    afficher(tab,N);
    printf("\n");
    return 0;
}