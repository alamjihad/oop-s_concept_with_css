#include<iostream>
using namespace std;
class ParentClass
{
    public:
    virtual void print()
    {
        cout << "Hi! I am the first function" << endl;
    }
};
class ChildClass: public ParentClass
{
    public:
    void print()
    {
        cout << "Hi! I am the second function" << endl;
    }
};

int main()
{
    ChildClass Morphin;
    ParentClass* MorphinGrid = &Morphin;
    MorphinGrid->print();

    ChildClass Grid;
    Grid.print();
    system("pause>0");
}