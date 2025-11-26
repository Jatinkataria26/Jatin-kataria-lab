#include <stdio.h>

int main() {
    int a = 10;      
    int *p;          
    int **pp;        

    p = &a;          
    pp = &p;         
    printf("jatin,125113053\n");
    printf("Value of a  = %d\n", a);
    printf("Address of a = %p\n", &a);

    printf("\nValue of p (address of a) = %p\n", p);
    printf("Value pointed by p (*p) = %d\n", *p);

    printf("\nValue of pp (address of p) = %p\n", pp);
    printf("Value pointed by pp (*pp) = %p\n", *pp);
    printf("Value pointed by *pp (**pp) = %d\n", **pp);

    return 0;
}
