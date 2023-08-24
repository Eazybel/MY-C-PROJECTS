#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int i, sub;
    float std, avg = 0;
    
    printf("enter the total number of subjects of the student: ");
    scanf("%d", &sub);
    
    // Check if the number of subjects is greater than 10
    if (sub > 10)
    {
        printf("remember the subjects are a maximum of 10\n restart the app:");
        exit(1);  // Exit the program with code 1
    }
    
    printf("enter the student's grades below:\n"); 
    for (i = 1; i <= sub; i++)
    {
        printf("enter subject %d: ", i);
        scanf("%f", &std);
        
        // Check if the grade is greater than 100
        if (std > 100)
        {
            printf("remember the marks are a maximum of 100\n restart the app:");
            exit(1);  // Exit the program with code 1
        }
        
        avg = avg + std;
    }
    
    printf("the student's average is %f\n", avg / sub);
    
    int gra = (int)avg / sub;  // Convert average to an integer for grading
    
    // Determine the grade based on the average
    if (gra >= 90)
    {
        printf("Grade: A+");
    }
    else if (gra >= 80)
    {
        printf("Grade: A");
    }
    else if (gra >= 70)
    {
        printf("Grade: B");
    }
    else if (gra >= 60)
    {
        printf("Grade: C");
    }
    else if (gra >= 50)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Grade: F");
    }
    
    return 0;
}