#include <stdio.h>
#include <string.h>

int main()
{
    char word[21];
    char reverse[21];

    printf("Enter your name: \n");
    scanf("%s", word);

    int last = strlen(word);

    reverse[last] = '\0'; // Add null character at the end

    for (int i = 0; i < last; i++)
    {
        reverse[i] = word[last - i - 1];
    }          

    printf("Your reverse order is %s\n", reverse);
    return 0;
}