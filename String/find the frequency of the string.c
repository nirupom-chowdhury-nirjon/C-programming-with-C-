/*find the frequency of the string */
#include<stdio.h>
int main()
{
    char ch,str[30];
    int i,count=0;
    printf("Enter string:  \n");
    gets(str);

    printf("Enter character ");
    for(i=0;i<='\0';i++)
    {
    scanf("%c",&ch);
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        ++count;

    }
   printf("Number of the frequency of the word is [%c] =%d",ch,count);


}
