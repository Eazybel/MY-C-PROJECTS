#include<stdio.h>
int main()
{ 
    int i,arr[10],odd[5],even[5];
    for (i = 0; i < 10; i++)
    {
        printf("enter number: ");
        scanf("%i",&arr[i]);
    }
    
    // Commenting out the following code block that prints the elements of the 'arr' array.
    /*
    for (i = 0; i < 10; i++)
    {
        printf("%i",arr[i]);
    }
    printf("\n");
    */
    
    // Commenting out the following code block that assigns values to the 'odd' array and prints its elements.
    /*
    for (i = 0; i < 10; i+=2)
    {
        odd[i]=arr[i];
        printf("%i",odd[i]);
    }
    printf("\n");
    */
    
    // Commenting out the following code block that assigns values to the 'even' array and prints its elements.
    /*
    for (i = -1; i < 10; i+=2)
    {
        even[i]=arr[i];
        printf("%i",even[i]);
    }
    */
    
    return 0;
}