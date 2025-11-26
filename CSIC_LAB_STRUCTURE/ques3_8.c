#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    printf("jatin,125113053\n");
    struct Student s[100], temp; 
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (s[i].rollNo > s[j].rollNo) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\n--- Student Records Sorted by Roll Number ---\n");
    for (i = 0; i < n; i++) {
        printf("Roll No: %d\tName: %s\tMarks: %.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }

    return 0;
}
