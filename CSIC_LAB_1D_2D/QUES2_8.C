#include <stdio.h>

int main() {
    printf("JATIN,125113053\n");
    int a[10][10];
    int n, i, j;
    int sumMain = 0, sumSecondary = 0;

    printf("Enter the size of the square matrix (n×n): ");
    scanf("%d", &n);

    printf("Enter elements of the matrix (%d×%d):\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sumMain += a[i][i];             
        sumSecondary += a[i][n - i - 1]; 
    }

    printf("\nMatrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of main diagonal elements = %d\n", sumMain);
    printf("Sum of secondary diagonal elements = %d\n", sumSecondary);

    return 0;
}
