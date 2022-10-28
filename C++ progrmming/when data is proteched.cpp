 /*Write a program in C++  find age when data is protected*/
#include<iostream>
using namespace std;
class sample
{
protected:
    int age;

};
class sampleChild:public sample
{
public:
      void displayAge(int a)
      {
          age=a;
          cout<<"The age is :"<<age;
      }
};
main()
{
    sampleChild r;
    r.displayAge(34);
    return 0;
}
