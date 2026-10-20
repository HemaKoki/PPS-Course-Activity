#include <stdio.h>
int main()
{
	float weight,height,BMI;
	printf("Enter weight in kg:");
	scanf("%f",&weight);
	printf("Enter height in maters:");
	scanf("%f",&height);
	if(weight<=0||height<=0)
	 {
	 	printf("Invalid input:");
	 	return 0;
	 }
	BMI=weight/(height*height);
	printf("BMI= %.2f\n",BMI);
	if(BMI<18.5)
	   printf("underweight");
	else if(BMI<25)
	   printf("normal");
	else if(BMI<30)
	   printf("overweight");
	else
	   printf("obese");
return  0;	             
}
