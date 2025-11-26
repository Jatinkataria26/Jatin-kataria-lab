#include <stdio.h>

int main() {
    printf("JATIN,125113053\n");
    int a[10][10], transpose[10][10];
    int m, n, i, j;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    printf("\nEnter elements of the matrix (%d×%d):\n", m, n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of the Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
