#include <stdio.h>

int main()
{
    int maxNumbers = 20;
    int numbers[maxNumbers];
    int amt;
    printf("How many numbers do you want to enter? (up to %d)\n", maxNumbers);
    scanf("%i", &amt);

    if (amt > maxNumbers) {
        printf("Error: You entered more numbers than the maximum allowed.\n");
        return 1;
    }

    for (int i = 0; i < amt; i++)
    {
        printf("Enter your unsorted number: ");
        scanf("%i", &numbers[i]);
    }

    int tmp[maxNumbers];
    // Initialize tmp array with zeros
    for (int i = 0; i < amt; i++)
    {
        tmp[i] = 0;
    }

    // Bubble sort algorithm
    for (int i = 0; i < amt - 1; i++)
    {
        for (int j = 0; j < amt - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                // Swap the elements
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted numbers:\n");
    for (int i = 0; i < amt; i++)
    {
        printf("%i\n", numbers[i]);
    }

    return 0;
}