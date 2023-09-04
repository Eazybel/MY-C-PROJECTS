#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[20];
};

void displayContacts(struct Contact contacts[], int count) {
    printf("Contacts:\n");
    for (int i = 0; i < count; i++) {
        printf("Name: %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
        printf("-----------------\n");
    }
}

void addContact(struct Contact contacts[], int *count) {
    if (*count == MAX_CONTACTS) {
        printf("Contact list is full.\n");
        return;
    }

    struct Contact newContact;
    printf("Enter the name: ");
    scanf("%s", newContact.name);
    printf("Enter the phone number: ");
    scanf("%s", newContact.phone);

    contacts[*count] = newContact;
    (*count)++;

    printf("Contact added successfully.\n");
}

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\n-- Contact Management System --\n");
        printf("1. Display Contacts\n");
        printf("2. Add Contact\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayContacts(contacts, count);
                break;
            case 2:
                addContact(contacts, &count);
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}