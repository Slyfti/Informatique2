#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 1000

void csvToArray() {
    FILE* fichier = NULL;
    FILE* json = NULL;
    char chaine[N] = "";
 
    fichier = fopen("mesFringues.csv", "r");
    json = fopen("mesFringues.json", "w");
    char * strToken;
    
    if (fichier != NULL) {   
        fprintf(json,"[");
        while (fgets(chaine, N, fichier) != NULL) // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
            {

            strToken = strtok(chaine,";");
            int id = 0;
            while ( strToken != NULL && id <4) {
                switch (id%4) {
                    case 0: fprintf(json,"\n\t{\n\t\"id\":\"%s\",\n",strToken); id++; break;
                    case 1: fprintf(json,"\t\"appelation\":\"%s\",\n",strToken); id++; break;
                    case 2: fprintf(json,"\t\"taille\":\"%s\",\n",strToken); id++; break;
                    case 3: fprintf(json,"\t\"prix\":\"%s\",\n\t},",strToken); id++; break;
                }
            // On demande le token suivant.
            strToken = strtok(NULL,";");
            }

        }
        fprintf(json,"\n]");
 
        fclose(fichier);
    }


}

int main() {

    csvToArray();
    return 0;
}


