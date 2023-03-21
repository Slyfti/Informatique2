#include "fonctions.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* toutes mes signatures/prototypes de fonctions/méthodes + leur corps */



int* allouer(int taille) {
    int* tab = malloc(taille* sizeof(int));
    return tab;
}

void initialiser(int* monTab,int taille) {
    for (int i=0;i<taille;i++) {
        monTab[i] = rand()%100;
    }
}

void afficher(int* monTab,int taille) {
    for (int i=0;i<taille;i++) {
        printf(" | %d",monTab[i]);
    }
    printf("\n");
}


/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */
void copie(int* tableauOriginal, int* tableauCopie, int tailleTableau) {
    for (int i=0;i<tailleTableau;i++) {
        tableauCopie[i] = tableauOriginal[i];
    }
}

void echange(int* tab, int i, int j) {
    int temp;
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
}

