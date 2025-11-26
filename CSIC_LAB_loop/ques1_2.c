#include<stdio.h>
int main(){
    printf("JATIN,125113053\n");
    int a,b,c;
    printf("enter the three number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b ){
        if(a>c){
        printf("%d is the greatest number",a);
        }else{
            printf("%d is the gretest number,c");
        }
    }if(b>a){
        if(b>c){
        printf("%d is the greatest number",b);
    }else {
        printf("%d id the greatest number",c);
    }}
    return 0;
}