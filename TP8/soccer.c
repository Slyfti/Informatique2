#include "soccer.h"

void creationJoueur(Joueur* j) {
    printf("Creation du joueur: \n");

    printf("Nom ? \n");
    scanf("%s", j->nom);

    printf("Prenom ?\n");
    scanf("%s", j->prenom);

    printf("Poste ?\n");
    scanf("%s", j->poste);

    printf("Numéro ?\n");
    scanf("%d", &j->numero);

    printf("Âge ?\n");
    scanf("%d", &j->age);

    printf("Nombre de buts ?\n");
    scanf("%d", &j->nbButs);

    
}



void afficherJoueur(Joueur* j) {
    printf("Affichage du joueur: \n");

    printf("Nom: %s \n",j->nom);

    printf("Prenom: %s\n", j->prenom);

    printf("Poste: %s\n", j->poste);

    printf("Numéro: %d \n", j->numero);

    printf("Âge: %d \n", j->age);

    printf("Nombre de buts: %d\n",j->nbButs);

    
}

void creationEquipe(Equipe* e) {
    printf("Creation de l'équipe: \n");

    printf("NOM ? \n");
    scanf("%s", e->nom);

    printf("PAYS ?\n");
    scanf("%s", e->pays);

    printf("Championnat ?\n");
    scanf("%s", e->championnat);

    printf("Classement ?\n");
    scanf("%d", &e->classement);

    e->nbJoueurs=0;
    
}

void ajouterJoueur(Equipe* e,Joueur j) {
    int indexJoueur = e->nbJoueurs;
    if (indexJoueur==0) { // Si c'est le premier joueur de la liste on crée le tableau
    // append
        realloc(e->listeJoueurs, 1*sizeof(Joueur));
        e->listeJoueurs[0] = j;
        e->nbJoueurs = 1;
    } else { // Si c'est pas le premier joueurs 
        // append
        realloc(e->listeJoueurs, (indexJoueur+1)*sizeof(Joueur));
        e->listeJoueurs[indexJoueur] = j;
        e->nbJoueurs = indexJoueur+1;
    }
}