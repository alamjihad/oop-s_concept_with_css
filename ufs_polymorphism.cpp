#include<iostream>
using namespace std;
class Shape
{
    public:
        double one,two;
        Shape(double o,double t)
        {
            one=o;
            two=t;
        }
       virtual double area()
        {
            return 0;
        }
};
class Triangle: public Shape
{
    public:
    Triangle(double o,double t)
    Shape(o,t)
    {

    }
    double area()
    {
        return 0.5*one*two;
    }
};
class Rectangle: public Shape
{
    public:
    Rectangle(double o,double t)
    Shape(o,t)
    {

    }
    double area()
    {
        return one*two;
    }
};

int main()
{
    Shape* S;
    Triangle T(10,20);
    Rectangle R(10,20);
    S=&T;
    cout << "Triangle area is:" << S->area; << endl; 
    S=&R;
    cout << "Rectangle area is:" << T->area; << endl; 
    return 0;
}