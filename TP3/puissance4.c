#include "puissance4.h"
#include <stdlib.h>
#include <stdio.h>

// corps des différentes fonctions/procédures
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
        case 2: printf("| O ");
        break;
      }
    }
    printf("| \n");
  }
}


int jouer(int** maGrille,int taille, int joueur) {
  int res;
  int colonne;
  int i;
  
  res =0;
  i = taille-1;

  printf("Veuillez saisir une colonne ? \n");
  scanf("%d",&colonne);

  if (colonne > taille-1 || colonne <0) {
    res =0;
  } else if (maGrille[0][colonne] != -1) {
    res =0;
  } else {

    while (i <-1 || !res) {
      if (maGrille[i][colonne] == -1) {
        maGrille[i][colonne] = joueur;
        res =1;
      } else {
        i = i -1;
      }
    }
  }
  return res;
}

int aGagne(int** maGrille,int taille) {
  int joueur;

  int estPlein =1;
  for (int c=0;c < taille; c++) {
    // Vérifier si le haut du puissance 4 est plein
  if (maGrille[taille-1][c] == -1) {
    estPlein = 0;
    }
  }

  if (verificationLignes(maGrille,taille) == 1 || verificationColonnes(maGrille,taille) == 1 || verificationDiag1(maGrille,taille) == 1 || verificationDiag2(maGrille,taille) == 1) {
    joueur = 1; // joueur 1 gagne
    } else if (verificationLignes(maGrille,taille) == 2 || verificationColonnes(maGrille,taille) == 2 || verificationDiag1(maGrille,taille) == 2 || verificationDiag2(maGrille,taille) == 2) {
      joueur = 2; // joueur 2 gagne
    } else if (estPlein) {
      joueur = 0; // Match nul
    } else {
      joueur = -1; // Partie pas terminé
    }
  return joueur;
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


int verificationColonnes(int** maGrille, int taille) {
  int joueur;
  
  joueur =-1;
  for (int j=0; j < taille; j++) {
    for (int i=0; i < taille-3; i++) {
      if (maGrille[i][j] !=-1 && maGrille[i][j] == maGrille[i+1][j] && maGrille[i+1][j] == maGrille[i+2][j] && maGrille[i+2][j] ==maGrille[i+3][j]) {
        joueur = maGrille[i][j];
      }
    }
  
  }
  return joueur;
}

int verificationDiag1(int** maGrille,int taille) {
  int joueur;
  joueur =-1;
  for (int i=0; i< taille-3;i++) {
    for (int j=3;j<taille;j++) {
      if (maGrille[i][j] != -1 && maGrille[i][j] == maGrille[i+1][j-1] && maGrille[i+1][j-1] == maGrille[i+2][j-2] && maGrille[i+2][j-2] == maGrille[i+3][j-3]) {
        joueur = maGrille[i][j];
      }
    }
  }
  return joueur;



}

int verificationDiag2(int** maGrille,int taille) {
  int joueur;
  joueur =-1;
  for (int i=0; i< taille-3;i++) {
    for (int j=0;j<taille;j++) {
      if (maGrille[i][j] != -1 && maGrille[i][j] == maGrille[i+1][j+1] && maGrille[i+1][j+1] == maGrille[i+2][j+2] && maGrille[i+2][j+2] == maGrille[i+3][j+3]) {
        joueur = maGrille[i][j];
      }
    }
  }
  return joueur;



}

void tourDeJeu(int** maGrille,int taille) {
  int joueur;
  int cptTour;
  int res;
  int place;

  joueur =1;
  cptTour = 0;
  place =0;
  res =-1;

  // Tant qu'il n'y as pas de gagant et que la grille n'est pas entièremenet remplie
  while (res ==-1 && cptTour != taille*taille) {

    while (!place) {
      place = jouer(maGrille,taille,joueur);
      if (!place) {
        printf("\n ඞ Erreur de saisie SUS ඞ\n");

      }
      afficher(maGrille,taille);
    }

    // Compter les tours
    cptTour++;

    // Regarder si y'a un gagant
    res = aGagne(maGrille,taille);

    // On change de joueur
    if (joueur==1) {
      joueur =2;
    } else {
      joueur =1;
    }

    // On valide le placement du pion
    place =0;
  }

  // Fin de la partie
  if (res !=-1) {
    printf("Le joueur %d a gagné \n",res);
  } else {
    printf("Il y a match nul \n");
  }

}


void libere (int** maGrille,int taille) {
  for (int i=0; i < taille; i++) {
    free(maGrille[i]);
  }
  free(maGrille);

}