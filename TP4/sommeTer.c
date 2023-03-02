#include <stdlib.h>
#include <stdio.h>

/* Auteur : ... */
/* Date :  ... */
/* Résumé :  ... */
/* Entrée(s) :  Nombre (Entier), accumulateur = 0 */
/* Sortie(s) :  Somme (entier) */
int sommeTer(int nb,int acc);

int main(){
    printf("Création du fichier sommeTer.c \n");
    printf("%d \n", sommeTer(2195,0));
    return 0;
}



// Précondition acc = 0
int sommeTer(int nb, int acc) {
    if (nb == 0) {
        return acc;
    } else {
        return sommeTer(nb/10,acc+nb%10);
    }
}