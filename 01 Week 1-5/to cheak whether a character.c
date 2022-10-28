/*  write a c program to cheak whether a character is an alphabet, digit or special character */
#include<stdio.h>
int main()
{
    char ch;
    printf("\n Enter any character:");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf(" The character is Digit");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("The character is capital letter");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("The character is small letter");
    }
    else
    {
        printf("The character is special character");
    }
    return 0;
}
