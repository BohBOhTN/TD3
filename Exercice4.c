#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb,i,paire,impaire;
    paire = 0;
    impaire = 0 ;
    do{
        printf("Donner un entier \n");
        scanf("%d",&nb);
        if(nb !=0){   
                    if(nb % 2 == 0){
                        paire +=1;
                    }else
                        impaire += 1;
        }
    }while(!(nb==0));
    printf("dans le suite des nombre il ya %d nombre paire et %d nombre impaire \n",paire,impaire);
    return 0;
}
