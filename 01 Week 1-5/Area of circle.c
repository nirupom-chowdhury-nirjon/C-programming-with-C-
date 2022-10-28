#include<stdio.h>
int main()
{
    int radious;
    float pi,area;
    pi=3.1416;
    printf("The radious of circle is:");
    scanf("%d",&radious);
    area=pi*radious*radious;
    printf("The area of circle is %0.2lf",area);
    return 0;
}
