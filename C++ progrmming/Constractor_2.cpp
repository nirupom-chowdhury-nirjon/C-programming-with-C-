/*Constructor*/
#include <iostream>
using namespace std;

class Human
{
protected:
    double age;
    double height;

public:
    Human(double age, double height){


    cout<<"Age: "<<age<<"\tHeight:"<<height<<endl;
    }
};
int main()
{
    double a, b;
    cin>>a;
    cin>>b;
    Human p1(a,b);
    return 0;
}
