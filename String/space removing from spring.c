/*SPACE REMOVE FROM STRING */
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len=0;
    char str[20];
    printf("Enter spring :: \n");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            i--;
            len--;
        }
    }
    printf("After space remove string is : %s",str);

}
