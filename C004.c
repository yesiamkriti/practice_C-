/*Given three integers a b and c, find if they are strictly increasing/decreasing or not.
 
Input
-------
Triplet of three integers (a,b,c)

Output
---------
You have to output 1 if they are either in strictly increasing (a>b>c) or decreasing (a<b<c) order.
Output 0, otherwise.*/
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("\n");
    scanf("%d",&a);
    printf("\n");
    scanf("%d",&b);
    printf("\n");
    scanf("%d",&c);
    if (((a>b)&&(b>c))||((a<b)&&(b<c))){
        printf("1");
    }
    else{
        printf("0");
    }
}