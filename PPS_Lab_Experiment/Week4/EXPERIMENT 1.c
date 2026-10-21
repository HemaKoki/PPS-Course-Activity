#include <stdio.h>
int main()
{
    int A,B,C,D,E,F,G;
	printf("Enter A B C D E F G");
	scanf("%d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&G);
	printf("a=%d\n",A+B+C+(D*E)+F*G);
	if(B!=0)
	   printf("b=%d\n",A/B*C-B+A*D/3);
	else 
	   printf("B cannot be zero for expression b\n");
	   printf("Not evaluated");   	
return 0;
		 	
}
