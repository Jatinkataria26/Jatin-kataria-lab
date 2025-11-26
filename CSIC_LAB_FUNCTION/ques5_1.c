#include <stdio.h>
int isPrime(int num) {
    int i;

    if (num <= 1)
        return 0; 

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0; 
    }

    return 1; 
}

int main() {
    int n;
    printf("jatin,125113053\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n))
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is Not a Prime Number.\n", n);

    return 0;
}
