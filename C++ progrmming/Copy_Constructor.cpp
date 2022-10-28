#include <iostream>
using namespace std;

class wall
{
private:
    double length;
    double height;

public:
    wall(double len, double hgt){
        length= len;
        height = hgt;
    }
   wall(wall &obj){
        length = obj.length;
        height = obj.height;
    }
    double calculateArea()
    {
        return length*height;
    }
};
int main()
{
    wall wall1(10.5, 8.6);
    wall wall2 = wall1;
    wall wall3 = wall2;
    cout<<"Area of wall 1: "<<wall1.calculateArea()<<endl;
    cout<<"Area of wall 2: "<<wall2.calculateArea()<<endl;
    cout<<"Area of wall 3: "<<wall3.calculateArea()<<endl;
}


