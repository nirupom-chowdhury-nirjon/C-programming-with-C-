#include<iostream>
using namespace std;
class Employee
{
public:
    int age;
    Employee(int x)
    {
        age=x;
    }
};
int main()
{
    Employee e1(40);
    Employee e2(90);
    Employee e3(340);
    cout<<"The age is :"<<e1.age<<endl;
    cout<<"The age is :"<<e2.age<<endl;
    cout<<"The age is :"<<e3.age;
}

