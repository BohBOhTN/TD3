#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb,nb_chiffre;
    float result;
    nb_chiffre = 0;
    do{
        printf("Donner un entier positif \n");
        scanf("%d",&nb);
    }while(!(nb>=0));
    result = nb;
    do{
        result = result / 10 ;
        nb_chiffre += 1;

    }while(!(result<1));
    printf("Le nombre %d compose de %d chiffre \n",nb,nb_chiffre);

    return 0;
}
