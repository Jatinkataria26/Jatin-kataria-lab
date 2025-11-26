#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, da, hra, gross;
};

int main() {
    struct Employee e[100];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Basic Salary: ");
        scanf("%f", &e[i].basic);
        printf("DA (Dearness Allowance): ");
        scanf("%f", &e[i].da);
        printf("HRA (House Rent Allowance): ");
        scanf("%f", &e[i].hra);

        e[i].gross = e[i].basic + e[i].da + e[i].hra;
    }

    printf("\n***** Employee Salary Details *****\n");
    printf("ID\tName\t\tBasic\tDA\tHRA\tGross\n");
    printf("-----------------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\t%.2f\t%.2f\t%.2f\n",
               e[i].id, e[i].name, e[i].basic, e[i].da, e[i].hra, e[i].gross);
    }

    return 0;
}
