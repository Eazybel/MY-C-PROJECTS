#include<stdio.h>
int main()
{
    FILE *fake;
    fake =fopen("test1.txt","r");
    //char name[15];
    

if (fake!=NULL)
{char all;
   while ((all=fgetc(fake))!=EOF)
{
    putchar(all);
}



//printf("%s",name);

fclose(fake);
}else printf("no file there");

    return 0;
}


