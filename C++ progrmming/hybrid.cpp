#include<iostream>
using namespace std;
class arithmetic
{
protected:
    int num1, num2;
public:
    void getdata()
    {
        cout<<"For Addition: ";
        cout<<"\nEnter the first number: ";
        cin>>num1;
        cout<<"Enter the second number: ";
        cin>>num2;
        cout<<endl;
    }
};
class plus1: public arithmetic
{
protected:
    int sum;
public:
    void add()
    {
        sum=num1+num2;
    }
};
class minus1
{
protected:
    int n1, n2;
};
