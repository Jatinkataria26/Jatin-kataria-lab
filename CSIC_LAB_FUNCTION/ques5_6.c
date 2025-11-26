#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
    int i, length;
    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1])
            return 0;  
    }
    return 1;  
}

int main() {
    char str[100];
    printf("jatin,125113053\n");
    printf("Enter a string: ");
    gets(str);   
    if (isPalindrome(str))
        printf("\"%s\" is a Palindrome.\n", str);
    else
        printf("\"%s\" is Not a Palindrome.\n", str);

    return 0;
}
