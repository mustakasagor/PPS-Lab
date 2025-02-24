#include <stdio.h>

int main() {
    // Loop through each row
    for (int i = 1; i <= 5; i++) {
        // Print characters for each column in a row
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
