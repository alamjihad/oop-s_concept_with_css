#include<iostream>
using namespace std;
class Student
{
    public:
        int roll;
        void print()
        {
            cout << roll << endl;
        
        }
        void setValue(double z)
        {
            average = z;
        }
        double getValue()
        {
            return average;
        }
    private:
        double average;

};

int main()
{
    Student One;
    One.roll = 35197;
    One.print();
    One.setValue(30948092.0943940932);
    cout << One.getValue() << endl;
    return 0;
}