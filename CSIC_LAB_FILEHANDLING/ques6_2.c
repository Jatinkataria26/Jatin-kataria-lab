#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    printf("jatin,125113053\n");
    fp = fopen("userinput.txt", "r"); 

    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    printf("File contents:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
