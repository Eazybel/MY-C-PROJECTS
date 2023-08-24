#include <stdio.h>

int main() {
    int num = 0;
    char unit1;
    char unit2;

    // Prompt for unit from which to convert
    printf("ENTER YOUR UNIT FROM [F][K][C]: ");
    scanf(" %c", &unit1);

    // Prompt for unit to which to convert
    printf("ENTER YOUR UNIT TO CONVERT [F][K][C]: ");
    scanf(" %c", &unit2);

    // Prompt for the number to convert
    printf("ENTER YOUR NUMBER: ");
    scanf(" %d", &num);

    // Perform the temperature conversion based on the selected units
    if (unit1 == 'C' && unit2 == 'K') {
        printf("THE ANSWER IS: %f", num + 273.15);
    } else if (unit1 == 'K' && unit2 == 'C') {
        printf("THE ANSWER IS: %f", num - 273.15);
    }

    if (unit1 == 'C' && unit2 == 'F') {
        printf("THE ANSWER IS: %f", (num * 9/5) + 32);
    } else if (unit1 == 'F' && unit2 == 'C') {
        printf("THE ANSWER IS: %f", (num - 32) * 5/9);
    }

    if (unit1 == 'F' && unit2 == 'K') {
        printf("%f", (num + 459.67) * 5/9);
    } else if (unit1 == 'K' && unit2 == 'F') {
        printf("THE ANSWER IS: %f", (num * 9/5) - 459.67);
    }

    return 0;
}