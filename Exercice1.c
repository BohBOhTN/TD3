#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,nb,somme,produit,i;
    float moy ;

    printf("Donner n\n");
    scanf("%d",&n);
    somme = 0;
    produit = 1;

   for (i=0;i<n;i++){

        printf("Donner un valeur \n ");
        scanf("%d",&nb);
        somme += nb;
        produit *= nb;
        }
    moy = (float)somme / n;
    printf("la somme des nombres est : %d \n",somme);
    printf("le produits des nombres est  : %d \n",produit);
    printf("le moyenne des valeurs est %.2f \n ",moy);
    return 0;
}
