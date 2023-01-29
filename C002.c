/*You have a certain number of 100 rupee notes, 10 rupee notes and 1 rupee notes with you.
There is an item you want to buy whose price is given to you.
Write a program to find if the item is affordable, that is the price of the item is less than or equal to the current money you have.


Input
-----
Four non negative integers. 
The first input is an integer representing the number of 100 rupee notes.
The second input is an integer representing the number of 10 rupee notes.
The third input is an integer representing the number of 1 rupee notes.
The fourth input is an integer representing the price of the item.

Output
------
You have to output 1 if the item is affordable.
You have to output 0 if the item is not affordable.*/
#include<stdio.h>
int main()
{
    int rs_100;
    int rs_10;
    int rs_1;
    int price;
    int total;
    printf("Enter the numbers of notes of 100 rs : \n");
    scanf("%d", &rs_100);
    printf("Enter the numbers of notes of 10 rs : \n");
    scanf("%d",&rs_10);
    printf("Enter the numbers of notes of 1 rs :\n");
    scanf("%d", &rs_1);
    printf("Enter the price of item :\n");
    scanf("%d", &price);
    total =((rs_100 * 100)+(rs_10 *10)+(rs_1 * 1));
    if (total>=price){
        printf("This item is affordable 1 ");
    }
    else{
        printf("This item is not affordable 0");
    }
}