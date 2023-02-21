#ifndef __puissance4_H_
#define __puissance4_H_
/* toutes mes signatures/prototypes de fonctions/procédures */
#endif

/* Auteur : Sylvain */
/* Date :  21/02/2023 */
/* Résumé :  alloue une matrice NxN */
/* Entrée(s) :  taille (entier) */
/* Sortie(s) :  matrice d'entiers */
int** allouer(int taille);


/* Auteur : Sylvain */
/* Date :  21/02/2023 */
/* Résumé :  alloue une matrice NxN */
/* Entrée(s) :  matrice d'entiers, taille de la matrice */
/* Sortie(s) : */
void initialiser(int** maGrille,int taille);

/* Auteur : Sylvain */
/* Date :  21/02/2023 */
/* Résumé :  affiche une matrice NxN */
/* Entrée(s) :  matrice d'entiers, taille de la matrice */
/* Sortie(s) : */
void afficher(int** maGrille,int taille);



/* Auteur : Sylvain */
/* Date :  21/02/2023 */
/* Résumé :  jouer*/
/* Entrée(s) :  matrice d'entiers */
/* Sortie(s) : */
int jouer(int** maGrille,int taille, int joueur);


/* Auteur : ... */
/* Date :  ... */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int aGagne(int** maGrille,int taille);

/* Auteur : ... */
/* Date :  ... */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int verificationLignes(int** maGrille,int taille);

/* Auteur : ... */
/* Date :  ... */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int verificationColonnes(int** maGrille,int taille);

/* Auteur : ... */
/* Date :  ... */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int verificationDiag1(int** maGrille,int taille);

/* Auteur : ... */
/* Date :  ... */
/* Résumé :  ... */
/* Entrée(s) :  ... */
/* Sortie(s) :  ... */
int verificationDiag2(int** maGrille,int taille);
