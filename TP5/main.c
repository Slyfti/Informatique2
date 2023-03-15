#include <stdio.h>
#include "fonctions.h"
#include "triLents.h"
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    printf("C'est le TD5 !\n");
    int* tab = allouer(5);
    initialiser(tab,5);
    afficher(tab,5);
    triInsertion(tab,5);
    printf("\n");
    afficher(tab,5);
    





    return 0;

}