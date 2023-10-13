#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
int main()
{
    char password[9];
    printf("Please enter your password: ");
    gets(password);
    int digit=0;
    int upper=0;
    int lower=0;
    int symbol=0;
   for (int i = 0; i < strlen(password); i++)
   {
       if (isdigit(password[i]))
       {
        ++digit;
       }
       else if (isupper(password[i]))
       {
        ++upper;
       }
       else if (islower(password[i]))
       {
        ++lower;
       }
       else if (!isalnum(password[i]))
       {
        ++symbol;
       }
       
       
   }
   if (upper==0 || digit==0 || lower==0 || symbol==0)
   {
    printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol!\n");
   }

if (upper!=0 && digit!=0 && lower!=0 && symbol!=0 && strlen(password) == 9)
   {
    printf("Successful\n");
   }

   if (strlen(password) != 9)
   {
    printf("Your password needs to be 8 characters long");
   }
   
   
   
    return 0;
}
