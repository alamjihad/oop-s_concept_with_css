#include<iostream>
using namespace std;
class One
{
    public:
        void sum(int a,int b)
        {
            cout << a+b << endl;
        }
};
class Two
{
    public:
        void sum(double a,double b)
        {
            cout << a+b << endl;
        }
};
int main()
{
    One First;
    First.sum(10,15);
    Two Second;
    Second.sum(9328094.744732,8558945.847584);
    return 0;
}