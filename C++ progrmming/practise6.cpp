#include<iostream>
using namespace std;
class construct
{
public:
    float area;
    construct()
    {
        area=0;
    }
    construct(int a,int b)
    {
        area=a*b;
    }
    void disp()
{
    cout<<"The area is : "<<area<<endl;
}

};

int main()
{
    construct o;
    construct o1(10,12);
    o.disp();
    o1.disp();
    return 0;
}
