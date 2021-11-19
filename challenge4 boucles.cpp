#include<stdio.h>
#include<stdlib.h>

int main(){
	int N=1;
	int somme = 0;
	int Max=0;
	
	while(N!=0){
		printf("donnez un nombre entre 0 et 100 ");
			scanf("%d",&N);
			while((N<0) || (N>100))
			{
				printf("veuillez entrez un  nombre entre 100 et 0");
				scanf("%d",&N);
				
			}
			
			somme=somme+N;
			 
			 if(N>Max)
			 {
			 	Max=N;
			 }
			 
	}
	printf("la somme est %d \n",somme);
	printf("le max des nombres est %d",Max);
	
	return 0;
}


