#include "stdio.h"
typedef struct new
{
    char name[10];
    int id;
    
}new;

int main()
{
   new arr[3];
   new *ptr;
    ptr=&arr[1];
   printf("enter the student name\n");
   scanf("%s",&arr[1].name);
   printf("enter the student id\n");
   scanf("%i",&arr[1].id);
   printf("your name is %s \nyour id is %i ",ptr->name,arr[1].id);

    return 0;
}
