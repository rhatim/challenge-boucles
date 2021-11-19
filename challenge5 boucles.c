#include<stdio.h>
#include<stdlib.h>


int main()
{
	int nombre,nbre;
	printf("entrez le nombre :\n");
	scanf("%d",&nombre);
	
	do { nbre=nombre%10;
	   printf("%d",nbre);
	   nombre=nombre/10;
	   }
	   while (nombre>0);
	   
	return 0;
	   
	
	
	
	
	
	
	
	
	
}
