#include <stdio.h>
int main()
{
  float amount,discount=0,delivery=0,total;
  int membership;
  printf("Enter order amount:");
  scanf("%f",&amount);
  printf("Premium(1) or Regular(0):");
  scanf("%d",&membership);
  if(amount>=500)
   {
     if(membership==1)
     discount=amount*0.10;
   }
  else
   {
     delivery=50;
   }
     total=amount-discount+delivery;
     printf("Final amount=Rs. %.2f", total);
return 0;
}
    
