#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

int main() {
    printf("JATIN,125113053\n");
    struct Book b[100];
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &b[i].id);
        printf("Title: ");
        scanf("%s", b[i].title);
        printf("Author: ");
        scanf("%s", b[i].author);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\n***** Books Priced Above 500 *****\n");
    int found = 0;
    for(i = 0; i < n; i++) {
        if(b[i].price > 500) {
            printf("\nBook ID: %d\n", b[i].id);
            printf("Title: %s\n", b[i].title);
            printf("Author: %s\n", b[i].author);
            printf("Price: %.2f\n", b[i].price);
            found = 1;
        }
    }

    if(!found)
        printf("\nNo books priced above 500.\n");

    return 0;
}
