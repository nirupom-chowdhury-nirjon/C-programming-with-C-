#include<iostream>
using namespace std;
class Student
{
    public:
    int roll;
    string name;
    void print()
    {
        cout<<"The roll of student 1 is :"<<roll<<endl;;
        cout<<"The name of student 1 is:"<<name;
    }
};
main()
{
    Student st1;
    st1.roll=101;
    st1.name="Nirupom Chowdhury Nirjon";
    st1.print();
    return 0;
}
