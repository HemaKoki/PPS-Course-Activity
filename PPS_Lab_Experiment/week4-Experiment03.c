#include <stdio.h>
int main()
{
    int a,b,c,d,e,total;
	float average;
	printf("Enter five subject marks");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	average=total/5.0;
	printf("total=%d\n",total);
	printf("Average= %.2f",average);  
	      	
return 0;
		 	
}
