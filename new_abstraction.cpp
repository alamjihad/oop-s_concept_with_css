#include<iostream>
using namespace std;
class MobileUser
{
    public:
        void call()
        {
            cout << "Hello" << endl;
        }
        virtual void sendMessage()=0;
};
class User1 : public MobileUser
{
    public:
        void sendMessage()
        {
            cout << "Hi . I am user1" << endl;
        }
};
class User2 : public MobileUser
{
    public:
        void sendMessage()
        {
            cout << "Hi . I am user2" << endl;
        }
};

int main()
{
    MobileUser*m;
    User1 One;
    User2 Two;
    //m->call();
    m=&One;
    m->call();
    m->sendMessage();
    m=&Two;
    m->sendMessage();
}