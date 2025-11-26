#include <stdio.h>

int main() {
    printf("JATIN,125113053\n");
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        remainder = num % 10;             
        reverse = reverse * 10 + remainder; 
        num = num / 10;                    
    } while (num !=0);
    printf("Reversed number = %d\n", reverse);

    return 0;
}
