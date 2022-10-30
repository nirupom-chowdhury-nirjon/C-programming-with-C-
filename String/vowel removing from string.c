/*Vowel removing from string */
#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,j;
    char ch[40];
    printf("Enter string:\n");
    gets(ch);
    len=strlen(ch);
    for(i=0; i<len; i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            for(j=i; j<len; j++)
            {
                ch[j]=ch[j+1];
            }
            i--;
            len--;
        }
    }
    ch[len+1]='\0';
    printf("string after removing vowel:  %s",ch);
}
