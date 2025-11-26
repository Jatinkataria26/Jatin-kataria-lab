#include <stdio.h>

int main() {
    printf("JATIN,125113053\n");

    int n, i;
    float arr[100], sum = 0, average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];  
    }

    average = sum / n; 

    printf("Sum of array elements = %.2f\n", sum);
    printf("Average of array elements = %.2f\n", average);

    return 0;
}
