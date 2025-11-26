#include <stdio.h>
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;              
    else
        return n * factorial(n - 1);  
}

int main() {
    int num;
    long long result;

    printf("jatin,125113053\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        result = factorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }

    return 0;
}

