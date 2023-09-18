#include<iostream>
using namespace std;
class Person
{
    public:
       virtual  void display()
        {
            cout << "I am a person" << endl;
        }
};
class Student : public Person
{
    public:
    void display()
    {
        cout << "I am a student" << endl;
    }
};
class Teacher : public Person
{
    public:
    void display()
    {
        cout << "I am a Teacher" << endl;
    }
};

int main()
{
    Person *P;
    Teacher T;
    P =&T;
    P->display();
    Student S;
    P =&S;
    P->display();
    return 0;
}