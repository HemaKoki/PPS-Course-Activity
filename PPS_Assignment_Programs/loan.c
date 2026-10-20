#include <stdio.h>
int main()
{
  int age,score;
  float income;
  printf("Enter age,monthly income and credit score:");
  scanf("%d %f %d",&age,&income,&score);
  if(age<21||age>60)
    printf("loan rejected",age);
  else if(income<25000)
          printf("loan rejected",income);
  else if(score<700)
          printf("loan rejected",score);
  else
     printf("loan approved");
return 0;
}
