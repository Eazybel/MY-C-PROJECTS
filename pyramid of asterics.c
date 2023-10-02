#include <stdio.h>

int main() {
    int numRows;

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &numRows);

    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= numRows - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}