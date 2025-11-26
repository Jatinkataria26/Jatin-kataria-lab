#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    printf("jatin,125113053\n");
    struct Student s[100];
    int n, i, topIndex = 0;

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
    }

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[topIndex].marks)
            topIndex = i;
    }

    printf("\n***** Student with Highest Marks *****\n");
    printf("Roll Number: %d\n", s[topIndex].roll);
    printf("Name: %s\n", s[topIndex].name);
    printf("Marks: %.2f\n", s[topIndex].marks);

    return 0;
}
