#include <stdio.h>
#include "puissance4.h"

int main(){
    printf("C'est le puissance 4 ! \n");
    int** grille = allouer(4);
    initialiser(grille,4);
    afficher(grille,4);
    return 0;
}
