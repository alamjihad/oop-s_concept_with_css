#include<iostream>
using namespace std;
class Person
{
    public:
        void display()
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

int main()
{
    Student Student1;
    Student1.display();
    return 0;
}