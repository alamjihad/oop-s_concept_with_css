#include<iostream>
using namespace std;
class ParentClass
{
  private:
    int earn;
    int expense;
  public:
    void setvalue (int Earn,int Expense)
    {
      earn = Earn;
      expense = Expense;
    }
    int getsave()
    {
      return earn-expense;
    }
};

int main()
{
  ParentClass Saving;
  Saving.setvalue(10000,5000);
  cout<< "Monthly saving : " <<Saving.getsave();
  return 0;
}