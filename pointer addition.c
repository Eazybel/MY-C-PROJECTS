#include <stdio.h>

int main()
{
int num1;
int num2;
int *ad1=&num1;
int *ad2=&num2;
    printf("enter the number:\n");
    scanf("%i",&num1);
    printf("enter the number2:\n");
    scanf("%i",&num2);

    printf("your pointer sum= %i: ",*ad1+*ad2);
    return 0;
}
