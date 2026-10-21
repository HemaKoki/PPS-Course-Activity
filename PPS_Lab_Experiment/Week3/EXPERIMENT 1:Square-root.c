#include <stdio.h>
#include <math.h>
int main()
{
	float n;
	printf("Enter a number");
	scanf("%f",&n);
	if(n<0)
	   printf("Square root is not a real number");
	else
	   printf("Square root= %.2f",sqrt(n));
    
    
return 0;
		 	
}
