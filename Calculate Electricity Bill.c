#include <stdio.h>

float calculateBill(int units) {
    float billAmount = 0.0;

    if (units <= 100) {
        billAmount = units * 1.5;  // Rate for first 100 units
    } else if (units <= 300) {
        billAmount = (100 * 1.5) + ((units - 100) * 2.0);  // Rate for next 200 units
    } else {
        billAmount = (100 * 1.5) + (200 * 2.0) + ((units - 300) * 3.0);  // Rate for units above 300
    }

    billAmount += billAmount * 0.05;

    return billAmount;
}

int main() {
    int units;
    float totalBill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid input! Units cannot be negative.\n");
        return 1;
    }

    totalBill = calculateBill(units);

    printf("Total electricity bill: $%.2f\n", totalBill);

    return 0;
}
