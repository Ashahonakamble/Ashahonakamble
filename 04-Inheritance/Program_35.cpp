//write a cpp program with single level inheritance using constructor initializer list
#include<iostream>
using namespace std;

class Animal
{
// int legs=4;                   //old
int legs;
int eyes;

public:
    Animal(int f,int h):legs(f),eyes(h){} // new line added
    void display1()
    {
        cout<<"This is Base Class"<<endl;
        cout<<"\nLegs= "<<legs<<endl;
        cout<<"\nEyes= "<<eyes<<endl;

    }
};

class Dog: public Animal
{
    // bool tail = true;
    string dog_tail_color;                //new line added
public:
    Dog(int a,int b,string tail_color):Animal(a,b),dog_tail_color(tail_color){}   //new line added
    void display2()
    {
        cout<<"This is Derived Class"<<endl;
     //   cout<<"\nLegs= "<<legs<<endl;
    //    cout<<"\nEyes= "<<eyes<<endl;
        cout<<"\nTail_color= "<<dog_tail_color<<endl;
    }
};

int main()
{
   // Animal a1(4,2);
    Dog d1(7,5,"brown");
    d1.display1();
    d1.display2();
}
