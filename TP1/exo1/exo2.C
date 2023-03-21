#include <stdio.h>
#include <stdlib.h>

int verifierStock(int aliment) {
  if (aliment <=0) {
    return 0;
  } else {
    return aliment;
  }
}

void ravitaillerAliment(int* p_aliment) {
  *p_aliment +=1;
}

int main(){


  int tab[6];

  int n;
  printf("Bienvenue au restaurant ! Que voulez vous faire ? \n 1. Initialiser les stock \n 2. Vérifier le stock \n 3. Ravitailler un aliment \n \n 0. Quitter");
  scanf("%d",&n);
  while ( n!= 0) {
    switch (n) {
		case 1 :
			printf("Veuillez entrer le nombre de : \n Tranche d'emmental \n Steak \n Steak vegan \n Feuille de salade \n Cornichon \n %.2f\n",*p_s1);
      for (int i=0; i < 6;i++) {
        scanf("%d",tab[i]);
      }
      printf("Le stock est initialisé")
		break;
		case 2 :
      int a;
			printf("Veuillez entrer le numéro de l'aliment \n 1. Tranche d'emmental \n 2. Steak \n 3. Steak vegan \n 4. Feuille de salade \n 5. Cornichon \n . t");
      scanf("%d",&a);
      ravitaillerAliment(tab[a]);
    break;

    case 3 :
      int a;
  		printf("Veuillez entrer le numéro de l'aliment \n 1. Tranche d'emmental \n 2. Steak \n 3. Steak vegan \n 4. Feuille de salade \n 5. Cornichon \n . t");
      scanf("%d",&a);
      printf("%d",tab[a]);
		break;

		default :
			printf("erreur\n");
		break;
	   }


    }
  return 0;
  }
