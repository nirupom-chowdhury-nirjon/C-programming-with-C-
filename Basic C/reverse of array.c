/* Reverse of a Array */
#include<stdio.h>
int main()
{
    int array[10],i;
    printf("Enter Array :  \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The reverse of a array is :  ");
    for(i=9;i>=0;i--)
    {
        printf("%d ",array[i]);
    }
}
