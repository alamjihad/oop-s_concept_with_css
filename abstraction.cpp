#include<iostream>
using namespace std;

class   SmartPhone{
public:
    virtual void TakeASelfie()=0;
     virtual void MakeACall()=0;
};
class Android:public SmartPhone
{
    public:
    void TakeASelfie()
    {
        cout<<"Android selfie\n ...";
    }
    void MakeACall()
    {
        cout<<"Android calling\n ...";
    }
};

class IPhone:public SmartPhone
{
    public:
    void TakeASelfie()
    {
        cout<<"IPhone selfie\n ...";
    }
     void MakeACall()
    {
        cout<<"IPhone calling\n ...";
    }
};

int main()
{

    SmartPhone*s1 = new Android();
    s1->TakeASelfie();
    SmartPhone*s2 = new IPhone();
    s1->TakeASelfie();
    s1->MakeACall();
    s2->TakeASelfie();
    s2->MakeACall();

    system("pause>0");
}