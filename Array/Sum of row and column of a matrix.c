/*Sum of row and column of a array */
#include<stdio.h>
int main()
{
    int a[10][10],i,j,row,col,sum=0;
    printf("Enter the row and column of a matrix: \n ");
    scanf("%d%d",&row,&col);
    printf("Enter Matrix A:  ");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix A : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            sum=sum+a[i][j];
        }
        printf("The sum row %d is : %d",i+1,sum);
        sum=0;
        printf("\n");
    }
    for(j=0; j<col; j++)
    {
        for(i=0; i<row; i++)
        {
            sum=sum+a[i][j];
        }
        printf("The sum column %d is : %d",i+1,sum);
        sum=0;
        printf("\n");
    }



}
