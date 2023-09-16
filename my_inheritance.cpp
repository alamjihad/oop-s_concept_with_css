#include<iostream>
using namespace std;
class inheritance
{
  public:
  double polash;
};

class inherit : public inheritance
{
    public:
    double shimul;
};

int main()
{
  inherit flower;
  flower.shimul = 8438.0382398094598;
  flower.polash = 9548.08347932480294;
  cout << "Shimul's total point is = " << flower.shimul << endl;
  cout << "Polash's total point is = " << flower.polash << endl;

return 0;
}