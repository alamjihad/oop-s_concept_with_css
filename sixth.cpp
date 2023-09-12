#include<iostream>
using namespace std;
class Instrument{
    public:
   virtual void MakeSound()=0;
    // {
    //     cout<<"Instrument playing...\n";
    // }
};
class Accordion:public Instrument
{
    void MakeSound()
    {
        cout<<" Accordion playing...\n";
    }
};
class Piano:public Instrument
{
    void MakeSound()
    {
        cout<<"Piano playing ...\n";
    }
};
int main()
{

    Instrument* i1=new  Accordion();
   // i1->MakeSound();

    Instrument* i2=new  Piano();
    //i2->MakeSound();

    Instrument* instruments[2]={i1,i2};
    for(int i=0;i<2;++i)
    {
        instruments[i]->MakeSound();
    }
    system("pause>0");
}