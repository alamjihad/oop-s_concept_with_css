#include<iostream>
using namespace std;
class ParentClass
{
 // private:
  public:
    int earn;
    int expense;
  public:
    void setvalue (int x,int y)
    {
      earn = x;
      expense = y;
    }
    int getsave()
    {
      return earn-expense;
    }
};

int main()
{
  ParentClass Saving;
   Saving.earn = 10000;
   Saving.expense = 5000;
// Saving.setvalue(10000,5000);
  cout<< "Monthly saving : " <<Saving.getsave();
  return 0;
}