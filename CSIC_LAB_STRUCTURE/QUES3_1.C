#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    printf("jatin,125113053\n");
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n***** Student Details *****\n");
    printf("Roll No\tName\tMarks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }

    return 0;
}
