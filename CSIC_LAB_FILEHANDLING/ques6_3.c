#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    printf("jatin,125113053\n");
    fp = fopen("userinput.txt", "r");

    if (fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
    return 0;
}
