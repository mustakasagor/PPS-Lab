
#include <stdio.h>

struct Person {
    char name[50];
    char dob[15];
    char address[100];
    char phone[15];
};

int main() {
    struct Person people[2];


    printf("Enter details for 2 people:\n");

    for (int i = 0; i < 2; i++) {
        printf("\nPerson %d\n", i + 1);

        printf("Enter name: ");
        fgets(people[i].name, sizeof(people[i].name), stdin);

        printf("Enter date of birth (DD-MM-YYYY): ");
        fgets(people[i].dob, sizeof(people[i].dob), stdin);

        printf("Enter address: ");
        fgets(people[i].address, sizeof(people[i].address), stdin);

        printf("Enter phone number: ");
        fgets(people[i].phone, sizeof(people[i].phone), stdin);
    }


    printf("\n\n--- Displaying Records of 2 People ---\n");

    for (int i = 0; i < 2; i++) {
        printf("\nPerson %d\n", i + 1);
        printf("Name       : %s", people[i].name);
        printf("DOB        : %s", people[i].dob);
        printf("Address    : %s", people[i].address);
        printf("Phone      : %s", people[i].phone);
    }

    return 0;
}
