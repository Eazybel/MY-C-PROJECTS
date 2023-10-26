#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
char choice;
typedef struct 
{
    char name[20];
    char number[20];
}phonebook;

phonebook list[100];
void create(){

    int i;
for ( i = 0; i < 1; i++)
{
    printf("NAME: \n");
    scanf("%s",list[i].name);
    printf("number: \n");
    scanf("%s",list[i].number); 
    break;
}
}

void display(){

for (size_t i = 0; i<2; i++)
{
    
    
    printf("NAME: %s\n",list[i].name);
    printf("number: %s\n",list[i].number);
}
}

void search(){
char name[20];
printf("Enter the name\n");
scanf("%s",name);
for (size_t i = 0; i < 1;i++)
{
    if (strcmp(name,list[i].name)==0)
    {
        printf("%s\n",list[i].number);
    }  
}
}
    int main()
{
    while (1)
{
    
    printf("1.CREAT New contact: \n2. Display saved: \n3. SEARCH contact\n4.exit\n");
    choice=getch();
    
    switch (choice)
    {
    case '1':
        system("cls");
        create();
        printf("saved");
        sleep(2);
         system("cls");
        break;
    case '2':
    system("cls");
         display();
        break;

    case '3':
    system("cls");
         search();
        break; 
    case '4':
    
        exit(1);
        break; 
    
    default:
        break;
    }
    }
    return 0;


}
