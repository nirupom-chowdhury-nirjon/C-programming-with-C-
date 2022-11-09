/*Fibonccy number using array */
#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("Enter how many input you want:  \n");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\nThe fibonaccy series is :  %d",a[i]);
    }

}
