#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 36
#define AGE(joueur) (2023 - joueur.anneeNaissance)
typedef struct {
    char* nom;
    char* prenom;
    int anneeNaissance;
    int ptsATP;


} Joueur;

int main(int argc, char* argv[]) { // argc : nombre d'arguments et argv liste des arguments (str)
    int nbJoueurs;
    

    printf("Combien de joueur voulez vous créer ?");
    scanf("%d",&nbJoueurs);
    // Allocation du tableau
    Joueur* tabJoueurs = malloc(sizeof(Joueur)*nbJoueurs);
    for (int i=0; i< nbJoueurs;i++) {
        
        tabJoueurs[i].nom = malloc(sizeof(char)*N);
        printf("Nom :");
        scanf("%s",tabJoueurs[i].nom);

        tabJoueurs[i].prenom = malloc(sizeof(char)*N);
        printf("Prenom :");
        scanf("%s",tabJoueurs[i].prenom);

        printf("Année de naissance :");
        scanf("%d",&tabJoueurs[i].anneeNaissance);

        printf("PointsATP :");
        scanf("%d",&tabJoueurs[i].ptsATP);
    }
    
    #ifdef ATP 
    for (int i=0; i< nbJoueurs;i++) {
        
        printf("\nNom :%s\n", tabJoueurs[i].nom);
        

        printf("Prenom :%s\n",tabJoueurs[i].prenom);


        printf("Année de naissance :%d\n",tabJoueurs[i].anneeNaissance);
   

        printf("PointsATP :%d\n",tabJoueurs[i].ptsATP);

        printf("Âge :%d\n",AGE(tabJoueurs[i]));

    }
    #endif

    return 0;
}