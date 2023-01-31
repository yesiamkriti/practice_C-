// finding greater number using if and else condition
#include<stdio.h>
int main()
{
    int a; int b; int t;
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    if (a<b){t=a;a=b;b=t;printf("greater number is %d",a);}
    else{printf("greater number is : %d",a);}
}