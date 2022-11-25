/*Write a program in C find the value the variable using pointer */
#include<stdio.h>
void test(int *a)
{
    *a=*a+50;
}
int main()
{
    int x=50;
    test(&x);
    printf("%d",x);

}
