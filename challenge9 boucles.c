#include <math.h>

int main()
{
    int N,n,resultat;
    printf("Entrez un nombre N :\n");
    scanf("%d",&N);
    printf("Entrez un nombre n :\n");
    scanf("%d",&n);
    while((N<=0) || (n<0))
    {
        if(N<=0)
        {
            printf("Entrez un nombre N supirieur a 0 \n");
            scanf("%d",&N);
        }
        else if(n<0)
        {
            printf("Entrez un nombre n supirieur ou egal a 0 \n");
        scanf("%d",&n);
        }
       
        
    }
     
     resultat = pow(N,n);
    printf("le resultat est %d",resultat);

    return 0;
}
