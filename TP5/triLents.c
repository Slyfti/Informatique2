#include "triLents.h"
#include "fonctions.h"
/* toutes mes signatures/prototypes de fonctions/méthodes + leur corps */

void triSelection(int* monTab, int taille) {
    int i_min;
    for (int i=0; i<taille; i++) {
        i_min = i;
        for (int j=i; j<taille;j++) {
            if (monTab[j] < monTab[i_min]) {
                i_min = j;
            }
        }
        echange(monTab,i,i_min);
    }
}



void triBulles(int* monTab, int taille) {
    int trié = 0;
    while (trié ==0) {
        trié = 1; // Trié reste 1 si on touche a rien pd un tour
        for (int j=0; j<taille-1;j++) {
            if (monTab[j] > monTab[j+1]) {
                echange(monTab,j,j+1);
                trié = 0; // car on a changé un élément
            }
        }
    }
}