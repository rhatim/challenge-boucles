#include <stdio.h>
#include <stdlib.h>

int main()
{ int nbre,y,z,index,x;
;
    printf("entrer le nombre:\n");
    scanf("%d",&nbre);
    y=0;
    z=1;
    for (index=2;index<=nbre;index++){ x=z+y;
     y=z;
     z=x;}
     
    if(nbre<=1) printf("U(%d)=1.\n",nbre);
    else printf("U(%d)=%d.\n",nbre,x);

    return 0;
}
