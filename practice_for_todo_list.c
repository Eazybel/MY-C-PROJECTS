#include<stdio.h>
#include<string.h>
#include<ctype.h>

 
int main()
{
  char word[1000];
    printf("enter the number please\n");
   gets(word);
    toupper(word);
    for (size_t i = 0; i < strlen(word); i++)
    {
      printf("%c",word[i]+1);
    }
    
    
return 0;
}
