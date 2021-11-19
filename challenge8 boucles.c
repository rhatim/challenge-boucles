#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a,b,c,fa,fc;
	a=-15;
	b=-10;
	
	c=(a+b)/2;
	
	while(1)
	{
		
		fa=a*a*a+12*a*a+1;	
		fc=c*c*c+12*c*c+1;
	
	   if(fa*fc<0) 
	      b=c;
	   else 
	      a=c;
	      
	   c=(a+b)/2;
	      
	   if(b-a<0.00001)
	   break;
	   
	}	
	
	
	printf("%.5f %.5f \n" ,a,b);
return 0;	
	
	
}
