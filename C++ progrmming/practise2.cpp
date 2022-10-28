#include<iostream>
using namespace std;
class Shape
{
private:
    int length;
    int breadth;
    int height;
public:
    void getdata(int a,int b,int c);
    int area()
    {
        return breadth*length;
    }
    int volumn()
    {
        return breadth*length*height;
    }
};

void Shape::getdata(int a,int b,int c)
{
    length=a;
    breadth=b;
    height=c;
}
main()
{
    Shape r;
    int a,b,c;
    cin>>a>>b>>c;
   r.getdata(a,b,c);
    cout<<"The area of the shape is :"<<r.area()<<endl;
    cout<<"The volumn of the shape is :"<<r.volumn()<<endl;
}
