#include <stdio.h>

int main() {
    FILE *fp;
    char text[500];
    printf("jatin,125113053\n");
    fp = fopen("userinput.txt", "w");

    if (fp == NULL) {
        printf("Error! Could not create file.\n");
        return 1;
    }

    printf("Enter text to write into the file:\n");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    printf("Data written successfully to 'userinput.txt'.\n");

    fclose(fp);

    return 0;
}
