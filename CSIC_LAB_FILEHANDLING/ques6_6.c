#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s;
    FILE *fp;
    int n, i;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);

    printf("\nStudent details stored successfully!\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    printf("\nStored Student Records:\n");
    printf("Roll\tName\tMarks\n");
    while (fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        printf("%d\t%s\t%.2f\n", s.roll, s.name, s.marks);
    }
    fclose(fp);

    return 0;
}
