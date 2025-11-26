#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("userinput.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append:\n");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    printf("Data appended successfully.\n");
    printf("jatin,125113053\n");
    
    fclose(fp);
    return 0;
}
