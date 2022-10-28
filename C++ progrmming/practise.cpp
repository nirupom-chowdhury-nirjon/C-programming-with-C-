#include<iostream>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    void print()
    {
        cout<<"The name of student is :"<<name<<endl;
        cout<<"The roll of student is :"<<roll;

    }
};
main()
{
    Student st1;
    st1.roll=21014014;
    st1.name="Nirupom Chowdhury Nirjon";
    st1.print();
    return 0;

}

