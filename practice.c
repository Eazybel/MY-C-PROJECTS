#include<stdio.h>
int main()
{
    int weeks=0;
    int hours[12];
    char value;
    float average=0;
    float sum=0;
    int i;
    printf("how many weeks did you took: ");
    scanf("%i",&weeks);
    for (i = 0; i <weeks; i++)
    {
       printf("how many hours in week %i: ",i);
       scanf("%i",&hours[i]);
       sum=sum+hours[i];
       
       
       
    }
    average=sum/weeks;
do
{
    printf("you want sum or average Enter the values with S or A: ");
    scanf(" %c",&value);
} while (value != 'A' && value != 'S');


if (value=='A')
{
    printf("%.3f",average);
}
if (value=='S')
{
    printf("%.3f",sum);
}

    
    
    return 0;
}


