#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "soccer.h"
/*
int oldMain() {
    
    Joueur* j = malloc(10*sizeof(Joueur));
    creationJoueur(j);
    afficherJoueur(*j);
    printf("\n");
    Equipe* p_e = malloc(10*sizeof(Equipe));
    creationEquipe(p_e);
    printf("\n");
    afficherEquipe(*p_e);
    ajouterJoueur(p_e,*j);
    printf("\n");
    afficherEquipe(*p_e);
    return 0;
}
*/

int main() {
    Joueur* j1 = malloc(1*sizeof(Joueur));
    creationJoueur(j1);

    Joueur* j2 = malloc(1*sizeof(Joueur));
    creationJoueur(j2);

    Joueur* j3 = malloc(1*sizeof(Joueur));
    creationJoueur(j3);

    Joueur* j4 = malloc(1*sizeof(Joueur));
    creationJoueur(j4);


    Equipe* e1 = malloc(1*sizeof(Equipe));
    creationEquipe(e1);



    ajouterJoueur(e1,*j1);
    ajouterJoueur(e1,*j2);
    ajouterJoueur(e1,*j3);
    ajouterJoueur(e1,*j4);


    afficherEquipe(*e1);

    Joueur* j5 = malloc(1*sizeof(Joueur));
    creationJoueur(j5);

    Joueur* j6 = malloc(1*sizeof(Joueur));
    creationJoueur(j6);

    Equipe* e2 = malloc(1*sizeof(Equipe));
    creationEquipe(e2);


    ajouterJoueur(e2,*j5);
    ajouterJoueur(e2,*j6);
    afficherEquipe(*e2);

    Joueur tmp = meilleurButeur(*e1);
    printf("Le meilleur buteur de l'équipe %s est %s %s \n",e1->nom,tmp.nom,tmp.prenom);

    int res = compareEquipe(*e1,*e2);

    switch (res) {
        case 1: printf("L'équipe %s est mieux classée\n", e1->nom);
        break;
        case 2: printf("L'équipe %s est mieux classée\n", e2->nom);
        break;
        case 0: printf("L'équipe %s à la même classement que %s\n", e1->nom,e2->nom);
        break;
        default: printf("ERROR\n");
        break;
    }

    return 0;
}