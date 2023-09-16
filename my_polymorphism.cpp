#include<iostream>
using namespace std;
class polymorphism
{
    public:
    virtual void print()
    {
        cout << "Hi! I am the first function" << endl;
    }
};

class poly: public polymorphism
{
    public:
    void print()
    {
        cout << "Hi! I am the second function" << endl;
    }
};

int main()
{
    poly morphin;
    polymorphism* morphingrid = &morphin;
    morphingrid->print();

    poly grid;
    grid.print();
    system("pause>0");
}