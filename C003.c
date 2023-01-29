/*You are given two positive integers, say M and N.
Check whether M is an exact multiple of N, without using loops.

Input
-----
Two positive integers, say M and N.

Output
------
You have to output 0 if M is not a multiple of N.
You have to output 1 if M is a multiple of N.*/
#include<stdio.h>
int main()
{
    int M;
    int N;
    printf("m: \n");
    scanf("%d",&M);
    printf("n: \n");
    scanf("%d",&N);
    if((M%N)==0){
        printf("1");
    }
    else{
        printf("0");
    }
}