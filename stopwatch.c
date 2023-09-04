#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void minus() {
    int second = 60;
    int minute = 60;
    int hour = 0;
    minute--;
    while (1) {
        second--;
        Sleep(1000);
        system("cls");
        printf("%02i:%02i:%02i", hour, minute, second);
        if (second == 0) {
            system("cls");
            printf("time out\n");
            break;
        }
    }
}

void add() {
    int second = 60;
    int minute = 0;
    int hour = 0;
    while (1) {
        Sleep(1000);
        second--;
        system("cls");
        printf("%02i:%02i:%02i", hour, minute, second);
        if (second == 0) {
            system("cls");
            printf("time out\n");
            exit(0);
        }
    }
}

int main() {
    char line;
    int second = 0;
    int minute = 0;
    int hour = 0;

    printf("Welcome to the counter.\n");
    printf("Seconds, minutes, or hours? Press s/m/h: ");
    line = getchar();
    getchar(); // Consume the newline character

    if (line == 's') {
        printf("Set your second? 00\n");
        scanf("%i", &second);

        while (1) {
            Sleep(1000);
            system("cls");
            printf("%02i:%02i:%02i", hour, minute, second);
            if (--second == 0) {
                system("cls");
                printf("time out\n");
                break;
            }
        }
    } else if (line == 'm') {
        printf("Set your minute? 00\n");
        scanf("%i", &minute);
        second = 60;

        while (1) {
            Sleep(1000);
            system("cls");
            printf("%02i:%02i:%02i", hour, minute, second);

            if (--second == 0) {
                if (--minute == 0) {
                    add();
                }
                second = 60;
            }
        }
    } else if (line == 'h') {
        printf("Set your hour? 00\n");
        scanf("%i", &hour);
        minute = 60;
        second = 60;

        while (1) {
            Sleep(1000);
            system("cls");
            printf("%02i:%02i:%02i", hour, minute, second);

            if (--second == 0) {
                if (--minute == 0) {
                    if (--hour == 0) {
                        minus();
                    }
                    minute = 60;
                }
                second = 60;
            }
        }
    }

    return 0;
}