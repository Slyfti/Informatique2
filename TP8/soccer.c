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



void afficherJoueur(Joueur j) {
    printf("Affichage du joueur: \n");

    printf("Nom: %s \n",j.nom);

    printf("Prenom: %s\n", j.prenom);

    printf("Poste: %s\n", j.poste);

    printf("Numéro: %d \n", j.numero);

    printf("Âge: %d \n", j.age);

    printf("Nombre de buts: %d\n",j.nbButs);

    printf("\n");

    
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
    
        e->listeJoueurs = malloc(1*sizeof(Joueur));
        e->listeJoueurs[0] = j;
        e->nbJoueurs = 1;
    } else { // Si c'est pas le premier joueurs 
        // append
        int *err; // ?
        err = realloc(e->listeJoueurs, (indexJoueur+1)*sizeof(Joueur));
        free(err); // ?
        e->listeJoueurs[indexJoueur] = j;
        e->nbJoueurs = indexJoueur+1;
    }
}

void afficherEquipe(Equipe e) {
    printf("Affichage de l'équipe \n");
    printf("PAYS : %s \n",e.nom);
    printf("CHAMPIONNAT : %s \n",e.championnat);
    printf("CLASSEMENT : %d \n",e.classement);
    printf("NOMBRE DE JOUEURS : %d \n",e.nbJoueurs);
    

    for (int i=0;i<e.nbJoueurs;i++) {
        afficherJoueur(e.listeJoueurs[i]);
    }
    printf("\n");
}

Joueur meilleurButeur(Equipe e) {
    Joueur meilleur = e.listeJoueurs[0];
    for (int i=1; i<e.nbJoueurs; i++) {
        if (meilleur.nbButs < e.listeJoueurs[i].nbButs) {
            meilleur = e.listeJoueurs[i];
        }
    }
    return meilleur;
}

int compareEquipe(Equipe e1,Equipe e2) {

    if (e1.classement < e2.classement) {
        return 1;
    } else if (e1.classement > e2.classement) {
        return 2;
    } else if ( e1.classement == e2.classement) {
        return 0;
    } else {
        return -1;
    }
}