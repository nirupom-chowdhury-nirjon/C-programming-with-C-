#include<stdio.h>
int main()
{
    int n;
    char name[30];
    printf("Enter your name:\t");
    scanf("%[^\n]",&name);
    printf("Enter your mark:\t");
    scanf("%d",&n);
    if(n>=80 && n<=100)
    {
        printf("Your CGPA is 4.00 & You got A+ ");
    }
    else if(n>=75 && n<80)
    {
        printf("Your CGPA is 3.75 & You got A");
    }
    else if(n>=70 && n<75)
    {
        printf("Your CGPA is 3.50 & You got A-");
    }
    else if(n>=65 && n<70)
    {
        printf("Your CGPA is 3.25 & You got B+");
    }
    else if(n>=60 && n<65)
    {
        printf("Your CGPA is 3.00 & You got B");
    }
    else if(n>=55 && n<60)
    {
        printf("Your CGPA is 2.75 & You got B-");
    }
    else if(n>=50 && n<55)
    {
        printf("Your CGPA is 2.50 & You got C+");
    }
    else if(n>=45 && n<50)
    {
        printf("Your CGPA is 2.25 & You got C");
    }
    else if(n>=40 && n<45)
    {
        printf("Your CGPA is 2.00 & You got D");
    }
    else if(n<40)
    {
        printf("You are fail in the Exam");
    }
    return 0;
}
