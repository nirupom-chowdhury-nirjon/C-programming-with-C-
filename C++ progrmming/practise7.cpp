/*copy CONSTRUCTOR*/
#include<iostream>
using namespace std;
class Employee
{
private:
    int salary ;
    int experience;
public:
    Employee(int x,int y)
    {
        salary=x;
        experience=y;
    }
    Employee( Employee &new_employee)
    {
        salary=new_employee.salary;
        experience=new_employee.experience;
    }
    void display()
    {
        cout<<"Salary: "<<salary<<endl;
        cout<<"Year of experience: "<<experience<<endl;
    }
};
int main()
{
    Employee employee1(300000,5);
    Employee employee2=employee1;
    cout<<"Employee 1 using parameterize constructor:  "<<endl;
    employee1.display();
    cout<<"Employee 2 using parameterize constructor:  "<<endl;
    employee2.display();
}
