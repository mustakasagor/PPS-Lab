#include <stdio.h>
#include <string.h>

struct Donor {
    char name[50];
    char address[100];
    int age;
    int bloodType;  // 1, 2, 3, 4
};

int main() {

    struct Donor donors[] = {
        {"Alice Smith", "123 Main St", 25, 2},
        {"Bob Johnson", "456 Oak Ave", 30, 1},
        {"Charlie Brown", "789 Pine Rd", 25, 2},
        {"Diana Prince", "321 Maple Ln", 22, 3},
        {"Ethan Hunt", "654 Elm St", 25, 1},
        {"Fiona Gallagher", "876 Spruce Blvd", 25, 2},
        {"George Clooney", "987 Cedar Dr", 35, 2},
        {"Hannah Baker", "135 Birch Way", 25, 4},
        {"Ian Somerhalder", "246 Walnut St", 28, 2},
        {"Jack Reacher", "357 Redwood Trl", 25, 2},
        {"Kate Winslet", "468 Chestnut Ct", 29, 3}
    };

    int n = sizeof(donors) / sizeof(donors[0]);

    printf("List of blood donors aged 25 with blood type 2:\n\n");

    for (int i = 0; i < n; i++) {
        if (donors[i].age == 25 && donors[i].bloodType == 2) {
            printf("Name: %s\n", donors[i].name);
            printf("Address: %s\n", donors[i].address);
            printf("Age: %d\n", donors[i].age);
            printf("Blood Type: %d\n\n", donors[i].bloodType);
        }
    }

    return 0;
}

