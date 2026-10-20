#include <stdio.h>
int main()
{
  float balance,amount;
  int choice;
  printf("Enter current account balance:");
  if(scanf("%f",&balance)!=1||balance<0)
    { 
      printf("Invalid balance.\n");
      return 1;
    }
   printf("\n---ATM MENU---\n");
   printf("1. Balance Inquiry\n");
   printf("2. Cash Withdrawal\n");
   printf("3. Cash Deposit\n");
   printf("Enter your choice:");

   if(scanf("%d",&choice)!=1)
      {
        printf("Invalid option.\n");
        return 1;
      }
   switch(choice)
 {
case 1:
    printf("Current balance: %.2f\n",balance);
    break;
case 2:
     printf("Enter Withdrawal amount:");
     if(scanf("%f", &amount)!=1||amount<=0)
        { 
          printf("Invalid amount.\n");
          return 1;
        }
     if(amount<=balance)
        { 
          balance-=amount;
          printf("Transaction successful.\n");
          printf("Remaining balance: %.2f\n",balance);
        }
    else
        {
          printf("Insufficient balance.\n");
        }
      break;
case 3:
        printf("Enter deposit amount:");
        if(scanf("%f", &amount)!=1||amount<=0)
         {
           printf("Invalid amount.\n");
           return 1;
         }
        balance +=amount;
        printf("Deposit Successful.\n");
        printf("Updated balance: %.2f\n",balance);
      break;
default:
        printf("Invalid option.\n");
 }
return 0;
}

     
