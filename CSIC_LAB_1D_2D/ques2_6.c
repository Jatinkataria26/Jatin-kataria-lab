#include <stdio.h>

int main() {
     printf("JATIN,125113053\n");
    int a[10][10], b[10][10], sum[10][10];
    int m, n, i, j;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    printf("\nEnter elements of first matrix (%d×%d):\n", m, n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix (%d×%d):\n", m, n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of the two matrices:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
