#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    //char str2;
    char ch;
    int i=0;
    printf("Convert to a string to uppercase  ::");
    printf("\n---------------------------------------------------\n");
    printf("Input a string in lowercase :");
    gets(str);
    printf("\nHere is  the above string in lowercase:: ");
    while(str[i])
    {
        ch=str[i];
        putchar(toupper(ch));
        i++;
    }






}
