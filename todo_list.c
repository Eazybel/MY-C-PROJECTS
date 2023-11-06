#include <stdio.h>
#include <stdlib.h>

int main() {
    char title[100];
    char date[100];
    char time[100];
    char task[100];
    FILE *file;

    
        printf("Welcome to Fast list:\n");
        while (1) {
        printf("Press 1 to preview last tasks, press 2 to add new, 3 to reset to default, 4 to exit:\n");   
        char choice = getch();
        switch (choice) {
            case '1':
                file = fopen("test.txt", "r");
                if (file == NULL) {
                    printf("There are no tasks to show.\n");
                    sleep(2);
                    system("cls");
                } else {
                    int all;
                    while ((all = fgetc(file)) != EOF) {
                        putchar(all);
                    }
                    fclose(file);
                }
                break;

            case '2':
                printf("Insert the title:\n");
                fgets(title, sizeof(title), stdin);
                file = fopen("test.txt", "a");
                fputs(title, file);
                fclose(file);

                printf("Insert the date:\n");
                fgets(date, sizeof(date), stdin);
                file = fopen("test.txt", "a");
                fputs(date, file);
                fclose(file);

                printf("Insert the time:\n");
                fgets(time, sizeof(time), stdin);
                file = fopen("test.txt", "a");
                fputs(time, file);
                fclose(file);

                printf("Insert the task:\n");
                fgets(task, sizeof(task), stdin);
                file = fopen("test.txt", "a");
                fputs(task, file);
                fclose(file);

                printf("File saved successfully.\n");
                sleep(2);
                system("cls");
                break;

            case '3':
                printf("You might need to restart this app. Press 'y' for yes, press 'n' for no:  \n");
                char restart = getch();
                if (restart == 'y') {
                    remove("test.txt");
                    printf("Restored to default successfully.\n");
                    sleep(2);
                    system("cls");
                } else {
                    printf("Reset canceled.\n");
                }
                break;

            case '4':
                exit(0);

            default:
                break;
        }
    }

    return 0;
}