#include<iostream>
using namespace std;
class Person
{
    public:
        int age;
        int mobileNumber;
};
class  Student : public Person
{
    public:
        double gpa;
        void display()
        {
            cout << age <<endl;
            cout << mobileNumber <<endl;
        }
};

int main()
{
    Student First;
    First.gpa = 4.75;
    First.age = 15;
    First.mobileNumber = 01713236766;
    First.display();
    cout << First.gpa << endl; 
}