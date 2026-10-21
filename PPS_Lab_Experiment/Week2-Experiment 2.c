#include <stdio.h>
int main()
{
	int choice;
	float temp,result;
	printf("1. farenheit to celsius\n");
	printf("2. celsius to farenheit\n");
	printf("Enter choice");
	scanf("%d",&choice);
	printf("Enter temperature");
	scanf("%f",&temp);
	if(choice==1)
	{
		result=(temp-32)*5/9;
		printf("celsius= %.2f",result);
	}
	else if(choice==2)
	{
		result=temp*9/5+32;
		printf("farenheit= %.2f",result);
	}
	else
	{
		printf("Invalid choice");
	}	
    
return 0;
}
