
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nbr,r,somme=0;

    for(r=1;r<=10;r++){
    printf("donnes le nombre %d \n",r);
        scanf("%d",&nbr);

     if(nbr>0){
        somme+=nbr;
     }
     }
     printf("la somme est : %d\n",somme);



    return 0;
}
