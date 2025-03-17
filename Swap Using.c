#include <stdio.h>

void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf(" Inside swapByValue function: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;
    printf(" Before swapByValue function: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf(" After swapByValue function: x = %d, y = %d\n", x, y);
    return 0;
}

