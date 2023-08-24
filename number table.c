#include<stdio.h>
int	main()
{
    int i,in;
    printf("enter your number \n");
      scanf("%i",&in);
      printf("your number is %i here is your number table\n",in);
    for (i = 0; i < 9; i++)
    {
       printf(":%ix%i %i\n",in,i,in*i);
    }

    return 0;
}
