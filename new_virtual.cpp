#include <iostream>
using namespace std;
class Base
{
  public:
  virtual void print()
  {
      cout << "Base function" << endl;
  }
};
class Derived : public Base
{
  public:
  virtual void print()
  {
      cout << "Derived function" << endl;
  }
};
int main() {
    Base* base1;
    Derived derived1;
    base1 = &derived1;
    base1->print();
    return 0;
}