/*to cheak string palindrome or not */
#include<stdio.h>
int main()
{
    char str[30],str2[30];
    int i,j=0,len=0;
    printf("Enter string: \n");
    gets(str);
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    printf("Length of the string is %d\n ",len);
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str[i];
    }
    str2[j]='\0';
    printf("\ nReverse of the string is:   %s",str2);
    int d=strcmp(str,str2);
    if(d==0)
    {
        printf("\nString are palindrom");
    }
    else{
        printf("\nString are not palindrome ");
    }
}
