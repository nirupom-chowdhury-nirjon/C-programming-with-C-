#include<stdio.h>
int main()
{
    int roll,physics,chemistry,math,english;
    int sum;
    char name[30];
    float percentage;
    printf("Enter your name:\n");
    scanf("%[^\n]",&name);
    printf("Enter your roll no:\n");
    scanf("%d",&roll);
    printf("Enter your mark in physics:\n");
    scanf("%d",&physics);
    printf("Enter your mark in Chemistry:\n");
    scanf("%d",&chemistry);
    printf("Enter  your marks in Math:\n");
    scanf("%d",&math);
    printf("Enter your mark in English:\n");
    scanf("%d",&english);
    sum=physics+chemistry+math+english;
    percentage=sum/4;
    printf("The total number is %d\n",sum);

    printf("The percentage of total  marks is: %f\n",percentage);
    return 0;
}
