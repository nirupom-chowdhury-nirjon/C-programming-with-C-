/*Transpose of a matrix */
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,row,col,sum=0;
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
            b[i][j]=a[i][j];
        }
    }
      printf("Transpose of a matrix :  \n");
      for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ",b[j][i]);
        }
        printf("\n");
    }

}
