//by default every class create a constractor
#include <iostream>
using namespace std;

class Human
{
protected:
    double age;
    double heights;

public:
    Human(){
    //contractor -- by default it's will run..
    //when a object called.
    //it's not be able to run as private.
        cout<<"This is accessing constructor.\n";
    }
};
class man: public Human
{
public:
    void print(){
    cout<<"Enter the age: ";
    cin>>age;
    cout<<"Enter the Heights(in inch): ";
    cin>>heights;
    cout<<"\n"<<"The Age and Heights(in inch) is: "<<age <<" "<<heights<<endl;
    }
};
int main()
{
    man n1;
    n1.print();
    cout<<"\n"<<"The program successfully terminated.";
    return 0;
}
