#include<stdio.h>
int main()
{int alpha=65;
    
    int i;
    for(i=0;i<=25;i++)
        {
            
             int *ptr=&alpha;
            printf("%c\n",*ptr);
           alpha++;
        }

    return 0;
}
