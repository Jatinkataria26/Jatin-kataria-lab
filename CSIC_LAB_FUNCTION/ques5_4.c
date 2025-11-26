#include <stdio.h>
int reverseNumber(int n) {
    int rev = 0, digit;

    while (n != 0) {
        digit = n % 10;         
        rev = rev * 10 + digit; 
        n = n / 10;             
    }

    return rev;
}

int main() {
    int num, result;
    printf("jatin,125113053;\n");
    printf("Enter an integer: ");
    scanf("%d", &num);
    result = reverseNumber(num);
    printf("Reverse of %d = %d\n", num, result);

    return 0;
}
