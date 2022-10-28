/*Write a program  in C++ to input student information */
#include<iostream>
using namespace std;
class Student
{
public:
    int roll;
    string name;
   void print()
    {
        cout<<"The roll of student  is : "<<roll<<endl;

        cout<<"The name of the student is :"<<name;
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
