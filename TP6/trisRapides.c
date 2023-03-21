
#include "fonctions.h"
int partitionner(int* tab, int p, int taille) {
    int pivot;
    pivot = tab[p];
    int i = p-1;
    int j = taille +1;

    // Tant que le début != fin
    while (i<j) {

        // Cherche à partir de la fin du tableau un élément supérieur au pivot
        do {
            j = j-1;
        } while (tab[j] > pivot);
        
        // Cherche à partir du pivot un élément inférieur au pivot
        do {
            i = i +1;
        } while (tab[i] < pivot);
        
        // On échange les deux éléments,
        if (i<j) {
            echange(tab,i,j);
        }
        
    }
    return j;
    
}


void triRapide(int* tab, int p, int taille){
    int q;  
    if (p < taille) { // Cas de base
        q = partitionner(tab,p,taille);
        triRapide(tab,p,q); // On trie le tableau à gauche
        triRapide(tab,q+1,taille); // On trie le tableau à gauche
    }
    
}
