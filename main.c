#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  // Déclaration de nos variables
 int nombre_mystere = 0, nombre_utilisateur = 0, nombre_tentatives = 0, saisie_utilisateur = 0;
 const int VALEUR_MIN = 1, VALEUR_MAX = 100, MAX_TENTATIVE = 10;

  do{

 //  Génération d'un nombre aléatoire
 srand(time(NULL));
 nombre_mystere = (rand() % (VALEUR_MAX - VALEUR_MIN + 1)) + VALEUR_MIN, nombre_tentatives = 0;
    
 printf("\nDevinez quel est mon nombre mystère. Indice: c'est un nombre entre %d et %d \n", VALEUR_MIN, VALEUR_MAX);

 do{

      if(nombre_tentatives >= MAX_TENTATIVE){
        printf("\nDommage ! Le nombre mystère était %d.\n", nombre_mystere);
        break;
      }
   
      // Saisie utilisateur
      scanf("%d", &nombre_utilisateur);
      nombre_tentatives ++;

      // On compare le nombre utilisateur et le nomre mystère
      if(nombre_mystere > nombre_utilisateur){
        printf("c'est plus\n");
      }
      else if(nombre_mystere < nombre_utilisateur){
        printf("C'est moins\n");
      }
      else{
        printf("\nBravo ! Le nombre mystère était %d, vous l'avez trouvé en %d tentatives.\n", nombre_mystere, nombre_tentatives);
      }
 }
while(nombre_utilisateur != nombre_mystere);

printf("\nVoulez-vous recommencer une nouvelle partie (1 - oui | 2 - non) ?\n");
scanf("%d", &saisie_utilisateur);

}
while(saisie_utilisateur != 2);

  printf("\nDommage, à la prochaine !");
  
  return 0;
}
