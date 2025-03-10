#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;


    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate the sum of the nth power of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the sum is equal to the original number
    return (result == num);
}

int main() {
    printf("Armstrong numbers from 1 to 100 are:\n");

    for (int i = 1; i <= 100; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
