#include<stdio.h>
#include<stdlib.h>

int main()
{
	int  nombre,x,p,a;
    printf("entrer un nombre entier:");
    scanf("%d",&nombre);

  for(p=2;p<=nombre;p++)
    {x=1;
       for(a=2;a<p;a++)
      {if(p%a==0){x=0;}}

    if(x==1) printf("%d\n",p);
    }



    return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

