#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    int i=0,j=0;
    int len=strlen(str1);

    for(j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';


    printf("Reverse of the string is :%s\n",str2);

    //cheak pallindrome or not

    int d=strcmp(str1,str2);
    if(d==0)
    {
        printf("The string is palindrome ");
    }
    else
    {
        printf("The string is not palindrome");

    }
    return 0;







}
