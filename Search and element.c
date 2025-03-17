#include <stdio.h>

int main() {
    int n, i, search, position = -1;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int list[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(list[i] == search) {
            position = i + 1;
            break;
        }
    }


    if(position != -1) {
        printf("Element %d found at position %d.\n", search, position);
    } else {
        printf("Element %d not found in the list.\n", search);
    }

    return 0;
}

