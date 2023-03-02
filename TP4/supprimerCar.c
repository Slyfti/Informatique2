#include <stdlib.h>
#include <stdio.h>
#define MAX 100

/* Auteur : ... */
/* Date :  ... */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
void supprCar(char maPhraseInitiale[MAX],char car,int i,int j, char maPhraseModifiee[MAX]);

int main(){
    printf("Création du fichier supprimerCar.c \n");
    return 0;
}

void supprCar(char maPhraseInitiale[MAX],char car,int i,int j, char maPhraseModifiee[MAX]) {

    smallN = strlen(car) -1
    // Si la première lettre correspond pas, tout le mot est bon
    if (i ==j) {
        printf("%s",maPhraseModifiee);
        return 0;
    } else if car[i] != maPhraseInitiale[i] {
        return supprCar(maPhraseInitiale,car,i+smallN,j,maPhraseModifiee)
    } else {
        // A finir
    }
        
}