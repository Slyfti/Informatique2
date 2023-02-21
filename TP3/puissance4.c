#include "puissance4.h"
#include <stdlib.h>
#include <stdio.h>

/* corps des différentes fonctions/procédures */
int** allouer(int taille) {
  int** tab = malloc(taille * sizeof(int*));
  for (int i=0; i < taille; i++) {
    tab[i] = malloc(taille * sizeof(int));
  }
  return tab;
}

void initialiser(int** maGrille,int taille) {
  for (int i=0; i <taille; i++) {
    for (int j=0; j <taille; j++) {
      maGrille[i][j] = -1;
    }
  }
}

void afficher(int** maGrille,int taille) {
  for (int i=0; i <taille; i++) {
    for (int j=0; j <taille; j++) {
      switch (maGrille[i][j]) {
        case -1: printf("|   ");
        break;
        case 1: printf("| X ");
        break;
        case 0: printf("| O ");
        break;
      }
    }
    printf("| \n");
  }
}


int jouer(int** maGrille,int taille, int joueur) {
  int colonne;
  printf("Veuillez saisir une colonne comprise dans le tableau de taille %d", taille);
  scanf("%d",&colonne);

  if (colonne <0 && colonne > taille && maGrille[taille-1][colonne] != -1) {
    printf("Erreur, Colonne pleine ou or terrain");
    return 0;

  } else {
    // Déterminer ou placer la pièce : on part du bas et on regarde si c'est plein
    int hauteur=0;
    while (maGrille[hauteur][colonne] != -1) {
      hauteur++;
    }

    maGrille[hauteur][colonne] = joueur;
    return 1;

  }
}

int aGagne(int** maGrille,int taille) {
  int joueur;

  int estPlein =1;
  for (int c=0;c < taille; c++) {
  if (maGrille[taille-1][c] == -1) {
    estPlein = 0;
    }
  }

  if (verificationLignes(maGrille,taille) == 1 || verificationColonnes(maGrille,taille) == 1 || verificationDiag1(maGrille,taille) == 1 || verificationDiag2(maGrille,taille) == 1) {
    joueur = 1;
    } else if (verificationLignes(maGrille,taille) == 2 || verificationColonnes(maGrille,taille) == 2 || verificationDiag1(maGrille,taille) == 2 || verificationDiag2(maGrille,taille) == 2) {
      joueur = 2;
    } else if (estPlein) {
      joueur = 0;
    } else {
      joueur = -1; // Partie pas termin
    }

}

int verificationLignes(int** maGrille,int taille) {
  int joueur;
  joueur =-1;
  for (int i=0; i< taille;i++) {
    for (int j=0;j<taille;j++) {
      if (maGrille[i][j] != -1 && maGrille[i][j] == maGrille[i][j+1] && maGrille[i][j+1] == maGrille[i][j+2] && maGrille[i][j+2] == maGrille[i][j+3]) {
        joueur = maGrille[i][j];
      }
    }
  }
  return joueur;
}
