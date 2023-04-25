typedef struct {
    char* nom;
    char* prenom;
    int nbDisques;
    int anneeN;


} Artiste;



void ajouterArtiste(Artiste a) {
    FILE* fichier = NULL;
    FILE* fichier = fopen("mesArtistes.csv","a");
    if (fichier!= NULL) {
        fprintf(fichier);
    }
}


int main(int argc, char* argv[]) {

    // PROGRAMME GESTION ARTISTE
    Artiste a;

    if (argc != 5) {
        printf("Il n'y a pas le bon nombre d'arguments")
    } else {
        a.nom = malloc(sizeof(char)*N);
        a.nom = argc[1];

        a.prenom = malloc(sizeof(char)*N);
        a.prenom = argc[2];

        a.nbDisques = atoi(argc[3]);

        a.anneeN = atoi(argc[4]);

        ajouterArtiste(a);
    }
    return 0;
}

