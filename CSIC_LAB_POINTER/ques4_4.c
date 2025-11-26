#include <stdio.h>

int main() {
    char source[100], destination[100];
    char *srcPtr, *destPtr;
    printf("jatin,125113053\n");
    printf("Enter a string: ");
    gets(source);  

    srcPtr = source;
    destPtr = destination;

    while (*srcPtr != '\0') {
        *destPtr = *srcPtr;  
        srcPtr++;
        destPtr++;
    }

    *destPtr = '\0';  

    printf("\nCopied string: %s\n", destination);

    return 0;
}
