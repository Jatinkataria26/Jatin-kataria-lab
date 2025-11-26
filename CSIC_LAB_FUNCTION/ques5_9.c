#include <stdio.h>

// Function using Call by Value
void callByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nInside callByValue function:\n");
    printf("a = %d, b = %d\n", a, b);
}

// Function using Call by Reference
void callByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nInside callByReference function:\n");
    printf("a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;
    printf("jatin,12511053\n");

    printf("Before function call:\n");
    printf("x = %d, y = %d\n", x, y);

    callByValue(x, y);
    printf("\nAfter callByValue (no change in main):\n");
    printf("x = %d, y = %d\n", x, y);

    callByReference(&x, &y);
    printf("\nAfter callByReference (changes reflected in main):\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
