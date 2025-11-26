#include <stdio.h>
void inputMatrix(int mat[10][10], int rows, int cols) {
    int i, j;
    printf("Enter elements of matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}


void addMatrix(int a[10][10], int b[10][10], int result[10][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void displayMatrix(int mat[10][10], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols;
    printf("jatin,1251113053\n");
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("\nMatrix A:\n");
    inputMatrix(a, rows, cols);

    printf("\nMatrix B:\n");
    inputMatrix(b, rows, cols);
    addMatrix(a, b, sum, rows, cols);
    printf("\nSum of the two matrices:\n");
    displayMatrix(sum, rows, cols);

    return 0;
}
