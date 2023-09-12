#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{ 
    char choice;
    char username[20];
    char name[10];
    char email[20];
    char password[20];

    printf("\t\t\tWELCOME TO Eazy CHAT\n");
    printf("1. log in\n2. create new account\n3. forgot password\n");
    printf("Enter your option:\n");
   choice=getch();
FILE *file;
switch (choice)
{
case '1':
   printf("hello world");
    break;
case '2':
printf("Enter Your Username: ");
gets(username);
file=fopen("eazy.txt","w");
fprintf(file,"%s",username);
fprintf(file,"\n",username);
fclose(file);

printf("Enter Your FullName: ");
gets(name);
file=fopen("eazy.txt","a");
fprintf(file,"%s",name);
fprintf(file,"\n",name);
fclose(file);

printf("Enter Your email: ");
gets(email);
file=fopen("eazy.txt","a");
fprintf(file,"%s",email);
fprintf(file,"\n",email);
fclose(file);

printf("Enter Your password: ");
gets(password);
file=fopen("eazy.txt","a");
fprintf(file,"%s",password);
fclose(file);
break;
default:
    break;
}

    return 0;
}
