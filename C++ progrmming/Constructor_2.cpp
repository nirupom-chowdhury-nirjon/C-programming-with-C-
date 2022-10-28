#include <iostream>
using namespace std;

class Human
{
protected:
    double age;
    double height;

public:
    Human(double age, double height){
    //constructor -- by default it's will run..
    //when a object called.
    //it's not be able to run as private.
    //number of object will be run.
        //cout<<"This is accessing constructor.\n";
    //cin>>age;
    //cin>>height;
    //default constructor parameter can not be pass.
    //parameter constructor parameter have to be passed.
    cout<<"Age: "<<age<<"\tHeight: "<<height<<endl;
    }
};
int main()
{
    //Input from user
    double a, b;
    cin>>a;
    cin>>b;
    //Human p1;
    //Human p1(50,6);
    Human p1(a,b);
    //Human p2;
    return 0;
}
