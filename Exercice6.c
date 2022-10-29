#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1,v2,test,i,j;
    test = 0;
    printf("Donneer la premier valeur \n");
    scanf("%d",&v1);
    for (i=1 ; i<=v1 ; i++){
        if(v1 % i == 0){
            test += 1;
        }
    }
    if(test==2){
        printf("Le nombre %d est premier \n",v1);
    }else
        printf("Le nombre %d n'est pas premier \n",v1);
    printf("\n \n");
    printf("La deuxiemme partie \n");
    printf("\n \n");
    printf("Donner un premier nombre \n");
    scanf("%d",&v1);
    do{
        printf("Donner un deuxiemme nombre \n"); //v2 must be greater than v1
        scanf("%d",&v2);
    }while(!(v2>v1));

    for(i=v1;i<=v2;i++){
        test = 0;
        for(j=1;j<=i;j++){
            if(i % j ==0){
                test +=1;
            }
        }
        if(test ==2){
            printf("le nombre %d est premier \n",i);
        }//else                         // na7ii les // fel else w el printf besh ywali ya3mlk affichage lel nombres ili mahomch premier fel interval mabin v1 et v2 
            //printf("le nombre %d n'est pas premier \n",i); 
    }
    return 0;
}
