#include <stdio.h>

int main()
{       
    int i, n, len;  // Variable declarations
    int b = 0;  // Initialize b
    float sum = 0;  // Initialize sum
    
    printf("welcome to average calculator\n");

    printf("please enter the length of your number 1-100: ");
    scanf("%d", &len);

    printf("Input the %d numbers : \n", len);
    for (i = 1; i <= len; i++)
    {
        printf("Number-%d :", b++);  // Prompt for number
        scanf("%d", &n);  // Read the number
        sum = sum + n;  // Add the number to sum
    }
	
    printf("%f\n", sum / len);  // Calculate and print the average
 
    // return 0;  // Optional return statement
}