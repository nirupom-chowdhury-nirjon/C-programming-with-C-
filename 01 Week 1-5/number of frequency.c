/*Write a c program to frequency of a string */
#include<stdio.h>
int main()
{
    char str[1000];
    char ch;
    int i,count=0;
    printf("Enter a spring::");
    gets(str);
    printf("\nEnter a character to find its frequency:: ");
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
            ++count;
    }
    printf("\nFrequency of %c=%d",ch,count);
    getch();

}
