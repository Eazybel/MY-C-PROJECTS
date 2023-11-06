#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
    if (argc !=2)
    {
        printf("invalid input");
        return 0;
    }
    
for (int i = 0; i <strlen(argv); i++)
{

    if (argv[1][i]=='a')
    {
        argv[1][i]='6';
       
        
    }
    else if (argv[1][i]=='e')
    {
        argv[1][i]='3';
        
        
    }
    else if (argv[1][i]=='i')
    {
        argv[1][i]='1';
        
        
    }
    else if (argv[1][i]=='o')
    {
        argv[1][i]='0';
       
        
    }

    
}
printf("%s\n",argv[1]);
    return 0;
}
