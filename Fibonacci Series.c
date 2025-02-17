#include <stdio.h>

void printFibonacci(int n);

int main() {
    int num;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printFibonacci(num);

    return 0;
}

void printFibonacci(int n) {
    long long int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms: \n", n);

    if (n >= 1) {
        printf("%lld ", first);
    }
    if (n >= 2) {
        printf("%lld ", second);
    }

    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%lld ", next);
        first = second;
        second = next;
    }

    printf("\n");
}
