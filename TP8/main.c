#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "soccer.h"
int main() {
    
    Joueur* j = malloc(10*sizeof(Joueur));
    creationJoueur(j);
    afficherJoueur(j);

    Equipe* e = malloc(10*sizeof(Equipe));
    creationEquipe(e);
    return 0;
}