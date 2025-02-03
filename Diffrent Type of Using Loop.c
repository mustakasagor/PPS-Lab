#include <stdio.h>

int main() {
    // Using for loop
    printf("Using for loop:\n");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Using while loop
    printf("Using while loop:\n");
    int j = 1;
    while(j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    // Using do-while loop
    printf("Using do-while loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while(k <= 5);
    printf("\n");

    return 0;
}
