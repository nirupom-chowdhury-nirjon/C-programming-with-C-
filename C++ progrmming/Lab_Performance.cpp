#include <iostream>
using namespace std;

class Human
{
protected:
    double age;
    double heights;
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
