#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    int asci=65;
    char name[6]={EZEDIN};
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    for ( i = 0; i <= 25; i++)
    {
        POINTS[i]=asci;
        printf("%i\n",asci);
        asci++;
    }
    
    
    return 0;
}
