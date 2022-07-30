#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year\t");
    scanf("%d",&year);
    if(year %400==0)
    {
        printf("%d is leap year",year);
    }

    else if((year %4==0) && (year %100!=0))
    {
        printf("%d is leap year",year);
    }
    else
    {
        printf("%d is not leap year",year);
    }
    return 0;
}
