#include <iostream>
using namespace std;

class Human
{
protected:
    double age;
    double height;

public:
    Human(){
        cout<<"Accessing constructor"<<endl;
    }
    ~Human(){

        cout<<"Accessing destructor"<<endl;
    }
};
int main()
{
    Human p1;
    return 0;
}

