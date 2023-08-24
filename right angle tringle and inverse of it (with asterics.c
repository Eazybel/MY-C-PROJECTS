#include<stdio.h>
int	main()
{int i,j;
    for ( i = 1; i <=5; i++)
    { 
       for ( j = 1; j <=i; j++)
       {
         printf("*");
         
       } 
        
        printf("\n");
        if (j>=5)
        {
          for ( i = 5; i >=1; i--)
    { 
       for ( j = 1; j <=i; j++)
       {
         printf("*");
         
       } 
        
        printf("\n");
        
      }   break;
        }    
    }
    return 0;
}
