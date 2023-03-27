#include <stdio.h>
#include "fonctions.h"
#include "triLents.h"
#include "trisRapides.h"
#include <stdlib.h>
#include <time.h>
#define N 1000000
int selectTri() {
    int error = 0;
    int in;
    while (!error) {
    
    printf("Veuillez selectionner le tri : \n 1. Tri Selection \n 2. Tri Bulle \n 3. Tri Insertion \n 4. Tri Rapide \n 5. Tri Fusion \n \n");
    error = scanf("%d",&in);
    }
    return in;


}
int main(){
    srand(time(NULL));
    printf("C'est le TD6 !\n");
    int* tab = allouer(N);
    initialiser(tab,N);
    // afficher(tab,N);
    printf("\n");

    int triId = selectTri();
    
    
    clock_t t1,t2;
    float temps_total;
    t1=clock();
    switch(triId) {
        case 1: triSelection(tab,N);
        break;

        case 2: triBulles(tab,N);
        break;
        
        case 3: triInsertion(tab,N);
        break;

        case 4: triRapide(tab,0,N-1);
        break;

        case 5: triFusion(tab,0,N-1);
        break;
    }
    t2=clock();
    temps_total= (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("Mon tri numéro %d, a mis %f de secondes à s'executer \n",triId,temps_total);
    printf("\n");

    printf("\n");

    
    return 0;
}

