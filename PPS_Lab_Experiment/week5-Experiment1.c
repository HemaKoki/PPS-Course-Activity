#include <stdio.h>
int main()
{
	float units,rate,bill;
	printf("Enter units consumed");
	scanf("%f",&units);
	if(units<0)
	{
		printf("Invalid units");
		return 0;
    }
    if(units<=100)
       rate=1.50;
    else if(units<=200)
	   rate=2.50;
	else if(units<=500)
	   rate=4.00;
	else
	   rate=6.00;
	bill=units*rate;
	printf("Electricity bill=Rs. %.2f",bill);
	   	      	
return 0;
		 	
}
