/*Binary search using array */
#include<stdio.h>
int main()
{
    int a[10]={10,65,35,47,85,12,45,96,32,11};
    int i,n,pos=-1;
    printf("Enter Number you want to search : \n ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(n==a[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {

        printf("Number is not in the list . ");
    }

    else
    {
        printf("The position of a number is : %d",pos);}

    return 0;

}
