#include<iostream>
using namespace std;
class Person
{
    protected:
        string name;
    public:
        void setName(string myName)
        {
            name = myName;
        }
};

class Intern : public Person
{
    public:
        void display()
        {
            cout << name << endl;
        }
};

int main()
{
    Intern Name;
    Name.setName("Jihad");
    Name.display();

    system("pause>0");
}