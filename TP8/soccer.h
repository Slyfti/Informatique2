// Définition de la structure joueur
#include <stdio.h>
#include <stdlib.h>
typedef struct{
    // Nom du joueur
    char nom[16];

    // Prenom du joueur
    char prenom[16];

    // Poste : milieu, avant-centre etc
    char poste[16];

    // Numéro du joueur
    int numero;
    
    // Moi tu me parles pas d'âge
    int age;

    // Nombre de buts
    int nbButs;


} Joueur;

typedef struct {
    // Nom de l'équipe
    char nom[16];

    // Pays de l'équipe
    char pays[16];

    // Nom du championnat
    char championnat[16];

    // Classement de l'équipe
    int classement;

    // Nombre de joueurs dans l'équipe
    int nbJoueurs;

    // Tableau de tout les joueurs
    Joueur* listeJoueurs;

} Equipe;

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */
void creationJoueur(Joueur* j);

/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void afficherJoueur(Joueur* j);


/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void creationEquipe(Equipe* e);


/* Auteur : ... */
/* Date :   ... */
/* Résumé : ... */
/* Entrée(s) : ... */
/* Sortie(s) :  ...  */

void ajouterJoueur(Equipe* e,Joueur j);