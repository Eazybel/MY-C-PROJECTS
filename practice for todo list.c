#include<stdio.h>
int plus(int sum);
int main() {
  int add=0;
  int avg=0;
  int zoo=plus(add);
  
   printf("the sum is %i\nthe average is %i ",zoo,zoo/10);
 return 0;
}
int plus(int sum){


for (int i = 1; i <=10; i++)
{
  
    int number[10];
    printf("number: %i ",i);
    scanf("%i",&number[i]);   
    sum = sum+number[i];  
    
     
}

return sum;

}