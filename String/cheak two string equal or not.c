/*Cheak two string equal or not*/
#include<stdio.h>
int main()
{
    char str[30],str2[30];
    int i,cheak=0;
    printf("Enter string 1 : \n");
    gets(str);
    printf("Enter string 2 : \n");
    gets(str2);
    while(str[i]!='\0' || str2[i]!='\0')
    {
        if(str[i]!=str2[i])
        {
            cheak=1;
            break;
        }
        i++;
    }
    if(cheak==0)
    {
        printf("String are equal ");
    }
    else if(cheak==1)
    {
        printf("string are not equal ");
    }

}
