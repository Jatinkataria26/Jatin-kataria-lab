#include<stdio.h>
int main(){
    printf("JATIN,125113053\n");
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum =0;
    for(int i=0;i<=n;i++){
        sum = sum + i;
    }
     printf("%d",sum);
    return 0;
}