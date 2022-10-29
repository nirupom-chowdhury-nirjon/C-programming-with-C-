/*find the Length of the string without using  library function*/
#include<stdio.h>
int main()
{
    char str[26]="Nirupom Chowdhury Nirjon\n";
    int i;
    printf("%s",str);
    int len=0;
    while(str[i]!='\0')
    {
       len++;
       i++;
    }
    printf("Length is %d",len);

}

