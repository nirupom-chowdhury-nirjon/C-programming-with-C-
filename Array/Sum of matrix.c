/* Sum of Matrix */
#include<stdio.h>
int main()
{
    int array[10][10],array2[10][10],sum[20][20],i,j,row,col;
    printf("Enter the row and column of a matrix : ");
    scanf("%d%d",&row,&col);
    printf("Enter the Array :  ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
     printf("\nEnter the Array 2 :  ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
    printf("\n\nArray 1:  \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d ",array[i][j]);
        }
        printf("\n");

    }
    printf("Array 2:  \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d ",array2[i][j]);
        }
        printf("\n");

    }
    printf("Sum of Resultant Matrix:  \n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           printf("%d ",array[i][j]+array2[i][j]);
        }
        printf("\n");
    }


}
