#include <stdio.h>

// Function to calculate average of array elements
float findAverage(int arr[], int n) {
    int i;
    float sum = 0;

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    return sum / n;  // Return average
}

int main() {
    int arr[100], n, i;
    float avg;
    printf("jatin,125113053\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    avg = findAverage(arr, n);

    printf("Average of array elements = %.2f\n", avg);

    return 0;
}
