/*Even and Odd number of Array */
#include<stdio.h>
int main()
{
    int array[10],b[10],c[10],k=0,j=0,i;
    printf("Enter the Array elements:  ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<10; i++)
    {
        if(array[i]%2==0)
        {
            b[j]=array[i];
            j++;
        }
        else
        {
            c[k]=array[i];
            k++;
        }
    }
     printf("The even number of array is: \n");
    for(i=0; i<j; i++)
    {
        printf("%d\n ",b[i]);

    }
   printf("The odd number of array is: \n");
    for(i=0; i<k; i++)
    {
        printf("%d\n ",c[i]);

    }
}
