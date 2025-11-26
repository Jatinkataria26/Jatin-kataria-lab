#include<stdio.h>
int main(){ 
    printf("JATIN,125113053\n");
    int n;
    printf("enter the year:");
    scanf("%d",&n);
    if(n%4==0 && n%400==0){
        printf("%d this is a leap year",n);
    }else {
        printf("%d is not the leap year",n);}
    return 0;
}