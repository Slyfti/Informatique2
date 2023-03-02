#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

/* Auteur : ... */
/* Date :  ... */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
void supprCar(char maPhraseInitiale[MAX],char car,int i,int j, char maPhraseModifiee[MAX]);

int main(){
    printf("Veuillez saisir votre phrase\n");
    char input[MAX];
    fgets(input,sizeof(char)*100,stdin); // Saisie utilisateur 
    char lettre;
    printf("Veuillez saisir votre caractère à exclure \n");
    scanf("%c",&lettre);
    char motVide[MAX] = "";
    supprCar(input,lettre,0,strlen(input)-1,motVide);

    return 0;
}

void supprCar(char maPhraseInitiale[MAX],char car,int i,int j, char maPhraseModifiee[MAX]) {

    // Si la première lettre correspond pas, tout le mot est bon
    if (i ==j) {
        printf("%s \n",maPhraseModifiee);
    } else if (car != maPhraseInitiale[i]){
        supprCar(maPhraseInitiale,car,i+1,j,maPhraseModifiee);
    } else {
        printf("%s \n",maPhraseModifiee);
        supprCar(maPhraseInitiale,car,i+1,j,maPhraseModifiee + maPhraseInitiale[i]);
    }
        
}