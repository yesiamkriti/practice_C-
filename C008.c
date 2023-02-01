#include<stdio.h>
int main(){
    int a; int b; int t;
    printf("a : ");
    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);
    if (a<b){t=a;a=b;b=t;printf("g  :%d ",a);}
    else{
    while(b!=0){
        t=a;a=b;b=t%b;
        printf("\n%d",a);
    }}
}