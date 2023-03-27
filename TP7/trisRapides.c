
#include "fonctions.h"
#include <stdlib.h>
#include <stdio.h>
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






void fusionner(int* tab, int debut, int milieu, int fin) {
    int i = 0;
    int max = fin- debut;
    int gauche = debut;
    int droite = milieu+1;
    int* tabTemp = allouer(fin+1); // ?

    // On compare valer par valeur les tableaux droite et gauche pour trier dans le tableau temp
    while (gauche <= milieu && droite <= fin) {
        if (tab[gauche] < tab[droite]) {
            tabTemp[i] = tab[gauche];
            gauche++;
        } else {
            tabTemp[i] = tab[droite];
            droite++;
        }
        i = i +1;
    }



    // On ajoute les valeurs qui reste à droite
    while (gauche <= milieu) {
        tabTemp[i] = tab[gauche];
        gauche++;
        i++;
    }
    // On ajoute les valeurs qui reste à gauche
    while (droite <= fin) {
        tabTemp[i] = tab[droite];
        droite++;
        i++;
    }


    // On transvase dans le tableau final
    for (int i =0; i<max+1; i++) {
        tab[i+debut] = tabTemp[i];
    }
    free(tabTemp);

}

void triFusion(int* tab, int debut, int fin) {
    if (debut <fin) {
        int milieu = (debut+fin)/2;
        triFusion(tab,debut,milieu);
        triFusion(tab,milieu+1,fin);
        fusionner(tab,debut,milieu,fin);
    }
}


