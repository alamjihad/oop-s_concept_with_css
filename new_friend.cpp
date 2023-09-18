#include<iostream>
using namespace std;
class Parent
{
    private:
        double salary=8934843.09350;
    public:
        friend class Child;
};
class Child
{
    public:
        void print(Parent C)
        {
            cout << C.salary <<endl;
        }
};

int main()
{
    Parent A;
    Child B;
    B.print(A);
    return 0;
}