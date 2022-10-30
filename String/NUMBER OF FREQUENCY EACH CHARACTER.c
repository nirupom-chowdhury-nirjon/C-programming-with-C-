#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i;
    int freq[1000];
    printf("Enter a string:");
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        freq[s[i]]++;
    }
    for(i=0; i<1000; i++)
    {
        if(freq[i]!=0)
        {
            printf("%c=%d\n",i,freq[i]);
                   
        }
            
    }
}
