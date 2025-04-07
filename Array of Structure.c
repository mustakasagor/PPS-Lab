#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 5

// Define structure
struct Book {
    char author[100];
    char title[100];
    int numOfCopies;
    float price;
};

int main() {
    struct Book books[MAX_BOOKS];

    // Input book details
    printf("Enter details for %d books:\n", MAX_BOOKS);
    for (int i = 0; i < MAX_BOOKS; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);  // Read string with spaces
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Number of copies: ");
        scanf("%d", &books[i].numOfCopies);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Display books with price > 100
    printf("\nTitles of books with price greater than 100:\n");
    for (int i = 0; i < MAX_BOOKS; i++) {
        if (books[i].price > 100) {
            printf("%s\n", books[i].title);
        }
    }

    return 0;
}

