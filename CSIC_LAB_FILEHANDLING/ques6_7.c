#include <stdio.h>

int main() {
    printf("jatin,125113053\n");
    FILE *fp;
    int num, count = 0;
    float sum = 0, avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }
    fclose(fp);

    if (count == 0) {
        printf("No numbers found in file!\n");
        return 0;
    }

    avg = sum / count;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
