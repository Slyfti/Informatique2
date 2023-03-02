#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

void emptyBuffer(){
  char c;
  while (((c = getchar()) != '\n') && (c != EOF));
}

/* Auteur : Sylvain */
/* Date :  2 mars 2023 */
/* Résumé :  Fonction qui détermine si le mot passé en variable est un palindrome */
/* Entrée(s) :  str, int, int */
/* Sortie(s) :  bool */
int estPalindromeMot(char monMot[MAX],int deb,int fin);

/* Auteur : ... */
/* Date :  ... */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int estPalindromePhrase(char maPhrase[MAX],int deb,int fin);

int main(){
    printf("Création du fichier palindrome.c \n");
    printf("Veuillez entrer votre phrase : \n");
    char input[MAX];
    fgets(input,sizeof(char)*100,stdin); // Saisie utilisateur 
    input[strlen(input)-1] = '\0'; // Remplace le \n par un \0

    // strlen(input)-1 sert à déterminer l'indice de la dernière lettre du mot

    if (estPalindromePhrase(input,0,strlen(input)-1)) {
        printf("La phrase %s est un palindrome", input);
    } else {
        printf("Le phrase %s n'est pas un palindrome", input);
    }
    return 0;
}


int estPalindromeMot(char monMot[MAX],int deb,int fin) {
    if (deb == fin) {
        return 1;
    } else if (monMot[deb] == monMot[fin]) {
        return estPalindromeMot(monMot,deb+1,fin-1);
    } else {
        return 0;
    }
}

int estPalindromePhrase(char monMot[MAX],int deb,int fin) {
    if (monMot[deb] == ' ') {deb++;}
    if (monMot[fin] == ' ' || monMot[fin] =='\n') {fin--;}
    if (deb >= fin) {
        return 1;
    } else if (monMot[deb] == monMot[fin]) {
        return estPalindromePhrase(monMot,deb+1,fin-1);
    } else {
        return 0;
    }
}