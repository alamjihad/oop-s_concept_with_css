#include<iostream>
using namespace std;
class encapsulation
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
    encapsulation save;
    save.setvalue(10000,5000);
    cout<< "Monthly saving is : " <<save.getsave();
    return 0;
}