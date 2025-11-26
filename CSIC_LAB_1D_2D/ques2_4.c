#include <stdio.h>

int main() {
     printf("JATIN,125113053\n");
    int arr[100], freq[100];
    int n, i, j, count;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  
            }
        }

        if(freq[i] != 0)
            freq[i] = count;
    }

    printf("\nFrequency of each element:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0)
            printf("%d occurs %d times\n", arr[i], freq[i]);
    }

    return 0;
}
