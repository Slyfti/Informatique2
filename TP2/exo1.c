#include <stdio.h>
#include <stdlib.h>
#define N 2

int** allouerTableau(int nb_lignes, int nb_colonnes);
void initTableau(int** tableau,int nb_lignes,int nb_colonnes);
int cptLigne(int** carre,int ligne,int nb_colonnes);
int cptColonne(int** carre,int colonne,int nb_lignes);
int cptDiag1(int** carre,int nb_lignes,int nb_colonnes);
int cptDiag2(int** carre,int nb_lignes,int nb_colonnes);
int estMagique(int** carre,int nb_lignes,int nb_colonnes);

int main() {
  int** tab = allouerTableau(N,N);
  initTableau(tab,N,N);

  // Verif magique
  if (estMagique(tab,N,N)) {
    printf("Votre tableau est magique \n");
  } else {
    printf("Votre tableau n'est pas magique \n");
  }

  return 0;
}


int** allouerTableau(int nb_lignes, int nb_colonnes) {
  int** tableau;
  tableau = malloc(nb_colonnes * sizeof(int));
  for (int i= 0; i < nb_lignes; i++) {
    tableau[i] = malloc(nb_lignes * sizeof(int));
  }
  return tableau;
}

void initTableau(int** tableau,int nb_lignes,int nb_colonnes) {
  int input;
  printf("Veuillez entrer les valeurs de votre tableau \n");
  for (int i=0; i < nb_lignes;i++) {
    for (int j=0; j <nb_colonnes;j++) {
      printf("L:%d C:%d :valeur: ",i,j);
      scanf("%d",&input);
      tableau[i][j] = input;
    }
    printf("\n");
  }


  // Affichage
  for (int i=0; i < nb_lignes;i++) {
    for (int j=0; j <nb_colonnes;j++) {
      printf("%d",tableau[i][j]);
    }
    printf("\n");
  }
}


int cptLigne(int** carre,int ligne,int nb_colonnes) {
  int somme = 0;
  for (int j=0; j<nb_colonnes; j++) {
    somme += carre[ligne][j];
  }
  return somme;
}

int cptColonne(int** carre,int colonne,int nb_lignes) {
  int somme = 0;
  for (int i=0; i<nb_lignes; i++) {
    somme += carre[i][colonne];
  }
  return somme;

}

int cptDiag1(int** carre,int nb_lignes,int nb_colonnes) {
  int somme = 0;
  for (int i=0; i<nb_lignes; i++) {
    for (int j=0; j<nb_colonnes; j++) {
      if (i==j) {
        somme += carre[i][j];
      }
    }
  }
  return somme;
}


int cptDiag2(int** carre,int nb_lignes,int nb_colonnes) {
  int somme = 0;
  for (int i=0; i<nb_lignes; i++) {
    for (int j=0; j<nb_colonnes; j++) {
      if (i==nb_colonnes-1-j) {
        somme += carre[i][j];
      }
    }
  }
  return somme;
}


int estMagique(int** carre,int nb_lignes,int nb_colonnes) {

  int diag1 = cptDiag1(carre,nb_lignes,nb_colonnes);
  int diag2 = cptDiag1(carre,nb_lignes,nb_colonnes);
  int sommeLigne =0;
  for (int i=0; i<nb_lignes; i++) {
    sommeLigne += cptLigne(carre,i,nb_colonnes);
    }
    sommeLigne = sommeLigne/ nb_colonnes;

  int sommeColonne =0;
  for (int i=0; i<nb_colonnes; i++) {
    sommeColonne += cptColonne(carre,i,nb_lignes);
    }
    sommeColonne = sommeColonne/ nb_lignes;

  return (diag1 == diag2 && diag1 == sommeLigne && diag1 == sommeColonne);



}
