#include <stdio.h>

int main() {
    int num = 1;  // Variable to keep track of the current number

    // Outer loop for each row
    for(int i = 1; i <= 5; i++) {
        // Inner loop to print numbers in each row
        for(int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Increment the number after printing
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
