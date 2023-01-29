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
// #include<stdio.h>
// int main()
// {
//   int rs_100;
//   int rs_10;
//   int rs_1;
//   int price;
//   int total;
//   printf("\n");
//   scanf("%d",&rs_100);
//   printf("\n");
//   scanf("%d",&rs_10);
//   printf("\n");
//   scanf("%d",&rs_1);
//   printf("\n");
//   scanf("%d",&price);
//   total=((rs_100*100)+(rs_10*10)+(rs_1*1));
//   if(total>=price){
//     printf("1");
//   }
//   else{
//     printf("0");
//   }
//   return 0;
// }