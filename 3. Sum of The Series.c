#include <stdio.h>
#include <math.h>

// Function to calculate factorial
long double factorial(int n) {
    long double fact = 1.0;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x, sum = 0.0;
    int n;

    // Input for x and n
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += pow(x, i) / factorial(i);
    }

    // Output the result
    printf("Sum of the series: %.6Lf\n", sum);

    return 0;
}
