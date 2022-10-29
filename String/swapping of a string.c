/*SWAPPING ALPHABETTICALLY OF  A STRING*/
#include<stdio.h>
int main()
{
    char str[30],str2[30];
    int i ,j;
    char temp;
    printf("Enter the string:: \n");
    gets(str);
    int len=strlen(str);
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;

            }
        }
    }
    printf("The sorted string is : %s",str);



}
