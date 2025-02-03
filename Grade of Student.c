#include <stdio.h>

int main() {
    float avgMarks;

    printf("Enter the average marks of the student: ");
    scanf("%f", &avgMarks);

    if (avgMarks >= 80 && avgMarks <= 100) {
        printf("Grade: Honours\n");
    } else if (avgMarks >= 60 && avgMarks < 80) {
        printf("Grade: First Division\n");
    } else if (avgMarks >= 50 && avgMarks < 60) {
        printf("Grade: Second Division\n");
    } else if (avgMarks >= 40 && avgMarks < 50) {
        printf("Grade: Third Division\n");
    } else if (avgMarks >= 0 && avgMarks < 40) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid marks entered.\n");
    }

    return 0;
}
