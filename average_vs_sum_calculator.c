#include<stdio.h>
int	main()
{
int sum=0;
int i;
float avg;
int sub[5];
for (i = 0; i < 5; i++)
{
    printf("enter your mat grade: ");
    scanf("%i",&sub[0]);
    printf("enter your che grade: ");
    scanf("%i",&sub[1]);
    printf("enter your soc grade: ");
    scanf("%i",&sub[2]);
    printf("enter your his grade: ");
    scanf("%i",&sub[3]);
    printf("enter your it grade: ");
    scanf("%i",&sub[4]);
    break;
}for ( i = 0; i <5; i++)
{
    sum=sum+sub[i];
    
}
avg=sum/5;
printf("%i \n %f",sum,avg);
    return 0;
}
