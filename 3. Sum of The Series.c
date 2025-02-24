#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int x, n;
    double sum = 0.0;

    // Input for x and n
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += (pow(x, i) / factorial(i)); // pow(x, i) calculates x^i
    }

    // Output the result
    printf("Sum of the series: %.6f\n", sum);

    return 0;
}
