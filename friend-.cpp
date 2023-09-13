#include<iostream>
using namespace std;
class EquilateralTriangle {
private:
    float a;
    float circumference;
    float area;
 public:
    void setA(float lenght)
    {
        a = lenght;
        circumference = a*3;
        area = (1.73 * a *a) /4;
    }////
    //friend void PrintResult(EquilateralTriangle);
    friend class Homework;
};

class Homework {
    public: 
    void PrintResult(EquilateralTriangle et)
    {
        cout<<"circumference = "<<et.circumference << endl;
        cout<< "area = "<< et.area <<endl;
    }
};

int main(){
    EquilateralTriangle et;
    et.setA(3);
    Homework h;

    //  cout<<"circumference = "<<et.circumference << endl;
    //  cout<< "area = "<< et.area <<endl;

    h.PrintResult(et);
    system("pause>nul");
}