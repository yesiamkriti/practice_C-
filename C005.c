//  1 year = 365.242375 rotation of earth thats why every 4th year is increased by 1 day and at every 100 year is decreased by 1 day and at every 400 year the day is increased by 1
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: \n");
    scanf("%d",&year);
    if(((year%4)==0) && (!((year%100)==0)) || ((year%400)==0))
    {
        printf("year %d is a leap year", year);
    }
}