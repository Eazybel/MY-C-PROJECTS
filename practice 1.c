#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    FILE *file;
    char choice;
    char web[20];
    printf("\t\t\tWELCOME TO Credential Manager\n");
    printf("\t\t\t----------------------------------------\n");
    printf("[1] Add new credential.\n[2] Delete existing credentials.\n[3] Search for a specific credential by Web name\n");
    printf("... ");
    choice=getch();
switch (choice)
{
case '1':
    printf("Enter Your Web Name: ");

gets(web);
file=fopen("cre.txt","w");
fprintf(file,"%s",web);
fprintf(file,"\n----------------------------------------",web);
fclose(file);
    break;
case '2':
    /* code */
    break;
case '3':
    /* code */
    break;
default:
    break;
}

    return 0;
}
