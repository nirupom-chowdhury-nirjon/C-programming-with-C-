/*To cheak whether it is spcial character or digit */
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character :  ");
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("The character is Digit . ");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("The character is Capital letter. ");
    }
   else if(ch>='a' && ch<='z')
    {
        printf("The character is small letter  . ");
    }
    else
    {
        printf("The character is special character. ");
    }
    return 0;
}
