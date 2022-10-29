/*find the total number of the word in string*/
#include<stdio.h>
int main()
{
    char str[200];
    int i=0,word=1;
    printf("Enter the string :: \n");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            word++;

        }
        i++;


    }
    printf("The word of the string is : %d",word-1);
}
