/* To cheak Leap Year or not */
#include<stdio.h>
int main()
{
    int year;
    printf("Enter Year:  ");
    scanf("%d",&year);
    if(year%4==0&& (year%400==0 || year%100!=0))
    {
        printf("The Year is Leapyear \n ");
    }
    else
    {
        printf("The year is not Leap year ");
    }
    getch();
}
