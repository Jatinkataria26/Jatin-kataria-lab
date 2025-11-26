#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;  
    else
        return (n % 10) + sumOfDigits(n / 10);  
}

int main() {
    int num, result;

    printf("jatin,125113053\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    result = sumOfDigits(num);
    printf("Sum of digits of %d = %d\n", num, result);

    return 0;
}
