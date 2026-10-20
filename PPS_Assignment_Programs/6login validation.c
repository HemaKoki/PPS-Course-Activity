#include <stdio.h>
int main()
{
  int id,password;
  printf("Enter user id:);
  scanf("%d",&id);
  if(id!=101)
    {
       printf("user not found");
    }
   else
    {
       printf("Enter password:");
       scanf("%d",&password):
      if(password==4321)
         printf("Login successful");
      else
        printf("Incorrect password");
    }
return 0;
}
   
