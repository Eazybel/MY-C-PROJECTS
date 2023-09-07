#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define CHAR VALUE = 1;
struct contact
{
    char name[50];
    char number[50];
};

int main()
{
printf("welcome to contact management\n");
while (1)
{
    printf("1 for new contact:\n2 for show existing:\n");
char value;
value=getch();



   if (value=='1')
   {
    struct contact first;

   printf("name:\n");
   fgets(first.name,sizeof(first.name),stdin);
   strtok(first.name, "\n");
   printf("numbers:\n");
   scanf("%s",&first.number);
   }else if (value=='2')
   {
    struct contact first;


    printf("name:%s\n",first.name);
    printf("number:%s\n",first.number);
   }
   
}



/*char name[50];
printf("enter: \n");
fgets(name,sizeof(name),stdin);
printf("%s",name);
*/
    return 0;
}
