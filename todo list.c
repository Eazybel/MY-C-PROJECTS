#include<stdio.h>
int main()
{
    char title[100]; 
    char date[100]; 
    char time[100]; 
    char task[100]; 
    char choice[2];
    FILE *file;
    
    printf("Welcome to Fast list:\n");
    printf("Press 1 to preview last tasks press 2 to add new 3 for Reset to Default 4 to exit:\n");
    char value=getch(choice);
    switch (value)
    {
    
    case '1':
    file=fopen("test.txt","r");
if ("test.txt"!=NULL)
{
       char all;
        file=fopen("test.txt","r");
        while ((all=fgetc(file))!=EOF)
        {
          putchar(all);
        }
}else if (file==NULL)
{

    printf("there is no task to show");
}

        
        break;
    case '2':
    printf("Insert the title:\n");
    fgets(title,sizeof(title),stdin); 
    file =  fopen("test.txt","w");
    fputs(title,file);
    fclose(file);
               
    printf("Insert the date:\n");
    fgets(date,sizeof(date),stdin); 
    file =  fopen("test.txt","a");
    fputs(date,file);
    fclose(file);    

    printf("Insert the time:\n");
    fgets(time,sizeof(time),stdin);  
    file =  fopen("test.txt","a");
    fputs(time,file);
    fclose(file); 

    printf("Insert the task:\n");
    fgets(task,sizeof(task),stdin);
    file =  fopen("test.txt","a");
    fputs(task,file);
    fclose(file);
    printf("File saved successfully");
    sleep(2);
    system("cls");

        break;
      case '3':
    remove("test.txt");
    printf("Resetored to default successfully");
    sleep(2);
    system("cls");
        
        break;
    case '4':
        exit(1);
        break;
    default:
        break;
   }
    return 0;
}
