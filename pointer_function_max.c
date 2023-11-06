#include <stdio.h>
int sum(int a,int b){
    
   if (a>b)
   {printf("player 1 wins with %i\n",a);
     return a;

   }else if (a<b)
   {
    printf("player 2 wins with %i \n",b);
    return b;
   }
   return 0;
}
int main()
{
int player1;
int player2;
int *ad1=&player1;
int *ad2=&player2;
    printf("enter the number player 1:\n");
    scanf("%i",&player1);
    printf("enter the number player 2:\n");
    scanf("%i",&player2);
sum(player1,player2);
    return 0;
}