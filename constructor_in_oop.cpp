#include<iostream>
using namespace std;
class User{
    public:
    string FirstName;
    string LastName;
    int Age;
    string Email;
    // default contractor looks like:- User (){}
    User(){
        FirstName = "nm";
        LastName = "nlm";
        Age = 0;
        Email = "not set";
    }

    //paramiterised constractor
        User( string fNanme,string lName,int age){
        FirstName = "fName";
        LastName = "lName";
        Age = age;
        Email = fName+"."+lName+"@mail.com";
    }
};
void GetUserInfo(User u){
        cout<<"First name:" <<u.FirstName<<endl;
    cout<<"Last name:" <<u.LastName<<endl;
    cout<<"Age:" <<u.Age<<endl;
    cout<<"Email:" <<u.Email<<endl;
}
int main()
{  
   User user1("saldina","nurak",27);  
   User user2("anna","lopez",28);
   /* user1.FirstName ="Saldina";
    user1.LastName ="nurak";
    user1.Age =27;
    user1.Email ="saldinanurak@mail.com";
*/ 
    // cout<<"First name:" <<user1.FirstName<<endl;
    // cout<<"Last name:" <<user1.LastName<<endl;
    // cout<<"Age:" <<user1.Age<<endl;
    // cout<<"Email:" <<user1.Email<<endl;
   /*
    User user2;
    user2.FirstName ="anna";
    user2.LasttName ="lopez";
    user2.Age ="28";
    user2.Email ="annalopez@mail.com";
*/
    GetUserInfo(user1);
    GetUserInfo(user2);
    cin.get();
}