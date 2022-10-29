/*string show character from word individually with ASCII character */
#include<stdio.h>
int main()
{
    char str[30];
    int i;
    printf("Enter the string:  ");
    gets(str);
    while(str[i]!='\0')
    {
        printf("[%c]=%d\n",str[i],str[i]);
        i++;
    }

}
