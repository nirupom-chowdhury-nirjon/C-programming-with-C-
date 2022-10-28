/*Destractor*/
#include<iostream>
using namespace std;
class Ratio
{
public:
    Ratio()
    {
        cout<<"Object is Born"<<endl;
    }
    ~Ratio()
        {
            cout<<"Object is Dies"<<endl;
        }
private:
    int num,den;

};
int main()
{
    Ratio x;
    cout<<"Now X is alive"<<endl;
    Ratio y;
      cout<<"Now X is alive"<<endl;


}
