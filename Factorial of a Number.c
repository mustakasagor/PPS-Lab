#include <stdio.h>

long long int factorial(int n);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {

        printf("Factorial of %d is %lld\n", num, factorial(num));
    }

    return 0;
}

long long int factorial(int n) {
    long long int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}
