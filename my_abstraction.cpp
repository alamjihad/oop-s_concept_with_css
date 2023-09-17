#include<iostream>
using namespace std;
class ParentClass
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
   ParentClass name;
   name.set("Bangla","English","Mathematics");
   name.print();
   return 0;
}