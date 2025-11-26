#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    printf("jatin,125113053\n");
    struct Student s1;           
    struct Student *ptr;         
    ptr = &s1;

    printf("Enter roll number: ");
    scanf("%d", &ptr->rollNo);

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks );
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", ptr->rollNo);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
