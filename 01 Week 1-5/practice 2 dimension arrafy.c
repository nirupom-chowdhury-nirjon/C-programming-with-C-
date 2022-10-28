/* write a c program in c find the sum of two matrix using two dimensional araay */
#include<stdio.h>
int main()
{
    int matrix1[10][10],matrix2[10][10],i,j,row,col;
    printf("Enter the dimension of row & col\t");
    scanf("%d%d",&row,&col);
    printf("Enter Matrix A:\n");
    for(i=0;i<row ;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("  %d",&matrix1[i][j]);

        }
    }
    printf("Enter Matrix B:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",matrix2[j][i]);
           matrix2[j][i]=matrix1[i][j];
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",matrix2[i][j]);
        }
        printf("\n");

    }
   printf("Transpose of a matrix \n");
   for(i=0;i<col;i++)
   {
       for(j=0;j<row;j++)
       {
           printf("  %d",matrix2[j][i]);
       }
       printf("\n");
   }
   return 0;
}
