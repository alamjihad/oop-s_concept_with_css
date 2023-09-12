#include<iostream>
#include<list>
using namespace std;
class YouTubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitels;
protected:
string OwnerName;
public:
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
    }

    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: "<< endl;
        for(string videoTitle : PublishedVideoTitels)
        {
            cout << videoTitle << endl;
        }
    }
    void Subscribe()
    {
        SubscribersCount++;
    }
    void  UnSubscribe()
    {
        if(SubscribersCount>0)
        {
            SubscribersCount--;
        }
    }
    void PublishedVideo(string title)
    {
        PublishedVideoTitels.push_back(title);
    }
class CookingYouTubechannel:public YouTubeChannel
{
    public:
    CookingYouTubechannel(string name,string ownerName):YouTubeChannel(name,ownerName)
    {

    }
}
void Practice()
{
    cout<< OwnerName <<"is practicing cooking,learning new recipes, experienting with spices..."<<endl;
}
};


int main()
{
    CookingYouTubechannel cookingYtchannel("Amy's Kitchen", "Amy");
    CookingYouTubechannel2 cookingYtchannel("John's Kitchen", "John");
    // cookingYtchannel.PublishedVideo("Apple pie");
    // cookingYtchannel.PublishedVideo("Cholate pie");
    // cookingYtchannel.Subscribe();
    // cookingYtchannel.Subscribe();
    // cookingYtchannel.GetInfo();
    cookingYtchannel.Practice();
    cookingYtchannel2.Practice();
    YouTubeChannel ytChannel("Codebeauty","Saldina")
    system("pause>0");
}
