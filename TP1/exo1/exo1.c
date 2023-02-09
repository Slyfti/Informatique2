#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double calculerDelta (double a, double b, double c){
  return pow(b,2) - (4*a*c);

}

void solutions(int* nbsolution, double* s1, double* s2,double a, double b, double c) {
  double delta = calculerDelta(a,b,c);

  // On détermine le nombre de solution en fonction de delta
  if (delta <0) { // Si delta < 0
    *nbsolution = 0;
  } else if (delta ==0) { // Si delta =0
    *nbsolution = 1;
    *s1 = (-b) / 2*a;
  } else { // Si Delta est supérieur à 0
    *nbsolution = 2;
    *s1 = (-b - sqrt(delta)) / (2*a);
    *s2 = (-b + sqrt(delta)) / (2*a);
  }

}


int main(){
  // double monReel;
  // printf("entrez un réel \n");
  // scanf("%lf",&monReel);
  // printf("Mon réel avec tous les chiffres après la virgule  %lf \n",monReel);
  // printf("Mon réel avec 2 chiffres après la virgule  %.2lf \n",monReel);
  // printf("Mon réel avec 3 chiffres après la virgule  %.3lf \n",monReel);
  int nbsolution;
  int* p_nbsolution=&nbsolution;

  double a;
  double b;
  double c;
  printf("Veuillez saisir a,b,c \n");
  scanf("%lf",&a);
  scanf("%lf",&b);
  scanf("%lf",&c);



  double s1;
  double s2;
  double* p_s1 = &s1;
  double* p_s2 = &s2;


  solutions(p_nbsolution,p_s1,p_s2,a,b,c);
  printf("Il y a %d solutions \n",nbsolution);
  printf("x1= %lf / x2= %lf \n",s1,s2);
}
