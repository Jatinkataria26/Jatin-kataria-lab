#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollNo;
    char name[50];
    struct Date dob;  // nested structure
};

int main() {
    struct Student s;

    printf("Enter student roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter date of birth (DD MM YYYY): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Date of Birth: %02d-%02d-%04d\n", s.dob.day, s.dob.month, s.dob.year);

    return 0;
}
