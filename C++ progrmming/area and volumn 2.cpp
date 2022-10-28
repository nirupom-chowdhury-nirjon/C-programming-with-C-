/*Write a c++ programming to find area and volumn when data is private*/
#include<iostream>
using namespace std;
class Shape
{
private:
    double length;
    double height;
    double breadth;
public:
    void getdata(double a,double b,double c);
    double area()
    {
        return length*breadth;
    }
    double volumn()
    {
        return length*breadth*length;

    }

};
 void Shape :: getdata(double a,double b,double c)
 {
     length=a;
     breadth=b;
      height=c;
 }
main()
{
    Shape r;

   r.getdata(4.678,7.5,4);
    cout<<"Area:(s.meter="<<r.area()<<endl;
    cout<<"Volumn:(c.meter="<<r.volumn()<<endl;
    return 0;
}

