/*Write a array and find its elements */
#include<stdio.h>
int main()
{
    int array[10];
    int i,number;
    printf("Enter Array elements:  ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nEnter a number to search from array :  ");
    scanf("%d",&number);
    for(i=0;i<10;i++)
    {
        if(number==array[i])
        {
            printf("Found it index no is : %d",i+1);
        }
    }


}
