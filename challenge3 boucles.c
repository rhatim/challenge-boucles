#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int Nombre,x,y=0;
	
	printf("entrez un entier");
	scanf("%d",&Nombre);
	
	for(x=2;x<Nombre;x++)
	{  
	  while (Nombre%x==0)
	       {y++;Nombre++;}
	}
	if (y==0)
	  printf("un nombre  premier");
	  

	
	else if (y!=0) 
	   printf("un nombre non premier");
	   
	 
	 return 0;  
	
}

