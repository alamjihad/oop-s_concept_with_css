#include<iostream>
using namespace std;
class abstraction
{
 private:
    string ban;
    string eng;
    string math;
 public:
 void set(string  a,string b,string c)
 {
    ban=a;
    eng=b;
    math=c;
 }
 void print()
 {
    cout << ban << endl;
    cout << eng << endl;
     cout << math << endl;
 }
};

int main()
{
    abstraction number;
    number.set("Bangla","English","Mathematics");
    number.print();
    return 0;
}