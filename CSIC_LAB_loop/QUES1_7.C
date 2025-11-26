#include <stdio.h>

int main() {
    printf("JATIN,125113053\n");
    int choice;
    float num1, num2, result;

    printf("***** MENU-DRIVEN CALCULATOR *****\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero not allowed.\n");
                return 0;
            }
            printf("Result = %.2f\n", result);
            break;

        case 5:
            printf("Exiting the program. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please select between 1-5.\n");
    }

    return 0;
}
