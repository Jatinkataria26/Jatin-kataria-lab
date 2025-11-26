#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;
    printf("jatin,125113053\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;

    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  
    }

    printf("\n");

    return 0;
}
