#include<bits/stdc++.h>
using namespace std;
class animal
{
public:
    void eat()
    {
        cout<<"Animal Eating..."<<endl;
    }
};
class Dog: public animal
{
public:
    void eat()
    {
        cout<<"Child class Dog Eating bread..."<<endl;
    }
};
int main()
{
    Dog d;
    animal a;
    //a.eat();
    d.eat();
    return 0;
}
