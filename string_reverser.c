#include "stdio.h"
#include "string.h"

int main()
{

char reverse[20];
// int *string=&reverse;
printf("enter your name: \n");
scanf("%s",reverse);
int last=strlen(reverse);
for (int i = last; i >= 0; i--)
{ 
   printf("%c",reverse[i]);
   
}


    return 0;
}

