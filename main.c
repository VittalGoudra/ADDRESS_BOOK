/*
PROJECT NAME : ADDRESS BOOK

I developed an Address Book project in C to store and manage contact details.
It allows users to add, search, edit, delete, and list contacts using structures.
The contact information such as Name, Email, and Batch is stored using file handling for future access.

NAME   : Vittal S. Goudra
MOB    : 8867462834
EMAIL  : vittalgoudra123@gmail.com
BATCCH : 26015B

*/

#include <stdio.h>
#include "contact.h"

int main() {
    int choice;
    AddressBook addressBook;
    addressBook.contactCount=0;
    initialize(&addressBook); // Initialize the address book

    do {
        printf("\n|------------------------------|\n");
        printf("|     Address Book Menu:       |\n");
        printf("|------------------------------|\n");
        printf("|    1. Create contact         |\n");
        printf("|    2. Search contact         |\n");
        printf("|    3. Edit contact           |\n");
        printf("|    4. Delete contact         |\n");
        printf("|    5. List all contacts      |\n");
        printf("|    6. Exit                   |\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                createContact(&addressBook);
                break;
            case 2:
                searchContact(&addressBook);
                break;
            case 3:
                editContact(&addressBook);
                break;
            case 4:
                deleteContact(&addressBook);
                break;
            case 5:
                // printf("Select sort criteria:\n");
                // printf("1. Sort by name\n");
                // printf("2. Sort by phone\n");
                // printf("3. Sort by email\n");
                // printf("Enter your choice: ");
                // int sortChoice;
                // scanf("%d", &sortChoice);
                listContacts(&addressBook);
                break;
            case 6:
                printf("Saving and Exiting...\n");
                saveContactsToFile(&addressBook);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);
    
       return 0;
}
