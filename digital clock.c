#include <stdio.h>
#include<conio.h>
#include<unistd.h>
int main()
{       
int h,m,s;

printf("set your time: ");
scanf("%d %d %d",&h,&m,&s);
if (h>12||m>60||s>60)
{
    printf("\ninvalid input");

}
while (1)
{
    s++;
    if (s>59)
    {
        m++;
        s=0;
    }
    //m++;
    if (m>59)
    {
        h++;
        m=0;
    }   
   if (h>11)
    {
         h=1;
    }  
    printf("%02d %02d %02d",h,m,s);
    Sleep(1000);
    system("cls");
}

 
}