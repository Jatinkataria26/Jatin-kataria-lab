#include<stdio.h>
int main(){
    printf("Jatin,125113053\n");
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int i=1;
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
