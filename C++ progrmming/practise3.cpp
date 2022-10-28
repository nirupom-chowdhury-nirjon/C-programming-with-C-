#include<iostream>
using namespace std;
class Car
{
    public://access specifier
    string name;//data member
    void printname()//member function
    {
    cout<<"Car name is: "<<name;

    }

};
main()
{
    Car obj1;
    obj1.name="TOYOTA";
    obj1.printname();
}



