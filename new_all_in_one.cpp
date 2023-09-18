#include<iostream>
using namespace std;
class Person
{
    private:
        int age;
    public:
        int id;
        void setValue(int k)
        {
            age=k;
        }
        void getValue()
        {
            cout << age <<endl;
        }
};
class Student: public Person
{
    public:
        void print()
        {
            cout << id << endl;
        }
};

class Learner
{
    public:
        virtual void show()=0;
};
class QuickLearner: public Learner
{
    public:
        void show()
        {
            cout << "I am a quick learner" << endl;
        }
};
class SlowLearner: public Learner
{
    public:
        void show()
        {
            cout << "I am a slow learner" << endl;
        }
};

class Parent
{
    public:
        void display()
        {
            cout << "I am the parent class" << endl;
        }
};
class Child: public Parent
{
    public:
        void display()
        {
            cout << "I am the child class" << endl;
        }
};

int main()
{
    Person One;
    One.setValue(19);
    One.getValue();

    Student Two;
    Two.id=10001;
    Two.print(); 

    Learner *Learn;
    QuickLearner Quick;
    SlowLearner Slow;
    Learn = &Quick;
    Learn->show();
    Learn = &Slow;
    Learn->show();

    Child Children;
    Children.display();

    return 0;
}