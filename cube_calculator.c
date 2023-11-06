#include <stdio.h>

int main()
{
    int a;  // Declare variable a to store input number

    printf("enter the number- \n");
    scanf("%i", &a);  // Read the input number

    printf("the cube is %d\n", a * a * a);  // Calculate and print the cube of the number

    return 0;  // Return 0 to indicate successful execution
}

