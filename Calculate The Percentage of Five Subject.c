#include <stdio.h>

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float total, percentage;

    printf("Enter marks for five subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &subject1, &subject2, &subject3, &subject4, &subject5);

    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total / 500) * 100;

    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 60) {
        printf("Result: First Division\n");
    } else if (percentage >= 50) {
        printf("Result: Second Division\n");
    } else if (percentage >= 40) {
        printf("Result: Third Division\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
