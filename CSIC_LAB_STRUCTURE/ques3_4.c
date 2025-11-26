#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    printf("jatin,125113053\n");
    struct Student s[100];
    int n, i;
    float sum = 0, average;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);

        sum += s[i].marks;  
    }

    average = sum / n;

    printf("\n***** Student Details *****\n");
    printf("Roll No.\tName\t\tMarks\n");
    printf("-------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    printf("\nAverage Marks of %d Students = %.2f\n", n, average);

    return 0;
}
