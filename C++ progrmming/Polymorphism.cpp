//function overloading
#include<bits/stdc++.h>
using namespace std;
class Geeks
{
public:

    void func(int x)
    {
        cout<<"Value of x is "<<x<<endl;
    }

    void func(double x)
    {
        cout<<"Value of x is "<<x<<endl;
    }
 void func(int x, int y)
    {
        cout<<"Value of x and y is "<<x<<" "<<y<<endl;
    }
};
int main()
{
    Geeks obj1;
    obj1.func(7);obj1.func(9.123);
    obj1.func(85,64);
    return 0;
}
