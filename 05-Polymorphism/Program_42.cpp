// Array of pointer objects


#include<iostream>
using namespace std;

class Shape{
public:
    virtual void draw(){
    cout<<"Generic shape";
    }
};

class Circle: public Shape{
public:
    void draw()
    {
    cout<<"Circle";
    }
    };

    class Square: public Shape{
public:
    void draw()
    {
    cout<<"Square";
    }
    };

    class Triangle: public Shape{
public:
    void draw()
    {
    cout<<"Triangle";
    }
    };

int main()
{

Shape *shapes[3]={new Circle(),new Square(),new Triangle()};
for (int i=0;i<3;i++)
    shapes[i]->draw();


}
