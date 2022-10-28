/* Sum of Array */
#include<stdio.h>
int main()
{
    int array[10],i,sum=0;
    float avg=0;
    printf("Enter Array :  ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Sum of the array is :  ");
    for(i=0;i<10;i++)
    {
        sum=sum+array[i];

    }
    printf("%d",sum);
   avg=(float)sum/10;
   printf("total %f",avg);
}
