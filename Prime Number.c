#include <stdio.h>

int isPrime(int num) {
    if (num < 2)
        return 0;  // 0 and 1 are not prime numbers

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;  // If divisible by any number, it's not prime
    }
    return 1; // Prime number
}

int main() {
    printf("Prime numbers from 1 to 100 are:\n");

    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
