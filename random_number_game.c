#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int user, random, i;
    srand(time(NULL)); // Seed the random number generator with the current time

    random = rand() % 10; // Generate a random number between 0 and 9

    for (i = 0; i < 3; i++) {
        printf("Enter a number between [1-9]: ");
        scanf("%d", &user);
        if (user==random+1 && user==random+1)
        {
           printf("you were close but\n");
        }
        

        if (user == random) {
            printf("Hooray, you got it!\n");
            break;
        } else {
            printf("Nah, you missed it.\n");
        }

        if (i == 1) {
            printf("Man, this is your last chance.\n");
        }
    }

    return 0;
}










