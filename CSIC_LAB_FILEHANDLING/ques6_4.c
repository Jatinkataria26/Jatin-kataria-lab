#include <stdio.h>

int main() {
    printf("jatin,125113053\n");  
    FILE *source, *target;
    char ch;

    source = fopen("source.txt", "r");
    target = fopen("copy.txt", "w");

    if (source == NULL || target == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);

    return 0;
}
