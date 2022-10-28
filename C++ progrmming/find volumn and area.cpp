2. /*Write a c++ programming to find area and volumn when data is public*/
#include<iostream>
using namespace std;
class Shape
{
public:
    double length;
    double height;
    double breadth;
    double area()
    {
        return length*breadth;
    }
    double volumn()
    {
        return length*breadth*length;

    }

};
main()
{
    Shape r;
    r.length=4.67;
    r.breadth=7.5;
    r.height=4;
    cout<<"Area:(s.meter="<<r.area()<<endl;
    cout<<"Volumn:(c.meter="<<r.volumn()<<endl;
}
