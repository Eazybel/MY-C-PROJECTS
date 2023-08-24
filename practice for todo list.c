#include<stdio.h>
int main()
{
    char var[10];
    printf("what is your name: ");
    scanf("%s",&var);
FILE *fptr;
fptr=fopen("test.txt","a");
fputs(var,fptr);
fclose(fptr);


    return 0;
}