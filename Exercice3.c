#include <stdio.h>
#include <stdlib.h>

int main()
{   const float c1 = 3;
    const float c2 = 2.5;
    const float c3 = 2;
    const float c4 = 1.5;
    int n,nb_etud_sup;
    float min,max,moy_etud,moy_general,m1,m2,m3,m4,somme_coif;
    somme_coif = c1 + c2 + c3 + c4;
    moy_general = 0;
    nb_etud_sup = 0;
    max = 0;
    min = 20;

    printf("Donner un nombre des etudiant \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Pour l'etudiant numero %d \n",i+1);
        printf("Donner la note de algorithme \n");
        scanf("%f",&m1);
        printf("Donner la note de architecture \n");
        scanf("%f",&m2);
        printf("Donner la note de systheme logique \n");
        scanf("%f",&m3);
        printf("Donner la note de anglish \n");
        scanf("%f",&m4);
        moy_etud = (((m1*c1) + (m2*c2) + (m3*c3) + (m4 * c4))/somme_coif);
        if(moy_etud > max){
            max = moy_etud;
        }else
            if(moy_etud<min){
                min = moy_etud;
            }
        if(moy_etud>=10){
            nb_etud_sup += 1;
        }
        moy_general += moy_etud;
        printf("La moyenne de l'etudiant n°%d est : %.2f",i+1,moy_etud);
    }

    printf("La moyenne generale de la classe est %.2f \n",moy_general/n);
    printf("La plus grand moyenne de la classe est %.2f \n",max);
    printf("La plus petite moyenne de la classe est %.2f \n",min);
    printf("le nombre d'etudiant ayant une moyenne >= 10 est %d \n",nb_etud_sup);

    return 0;
}
