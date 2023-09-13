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
int ContentQuality;
public:
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        ContentQuality = 0;
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
    void CheckAnalytics()
    {
        if(ContentQuality<5)
        {
            cout<<Nme<<"has bad quqlity content."<<endl
        }
        else
        {
            cout<<Nme<<"has great content."<<endl
        }
    }
};
class CookingYouTubechannel:public YouTubeChannel
{
    public:
    CookingYouTubechannel(string name,string ownerName):YouTubeChannel(name,ownerName)
    {

    }
    void Practice()
    {
        cout<< OwnerName <<"is practicing cooking,learning new recipes, experienting with spices..."<<endl;
        ContentQuality++;
    }
};
class SingersYouTubechannel:public YouTubeChannel
{
    public:
    SingersYouTubechannel(string name,string ownerName):YouTubeChannel(name,ownerName)
    {

    }
    void Practice()
    {
        cout<< OwnerName <<"is taking singing clases,learning new songs, learning how to..."<<endl;
    }
};


int main()
{
    CookingYouTubechannel cookingYtchannel("Amy's Kitchen", "Amy");
    SingersYouTubechannel singersYtchannel("JohnSings", "John");

    cookingYtchannel.Practice();
    SingingsYtchannel.Practice();
    SingingsYtchannel.Practice();
    SingingsYtchannel.Practice();
    SingingsYtchannel.Practice();
    SingingsYtchannel.Practice();

    YouTubeChannel * yt1 = &CookingYouTubechannel
    YouTubeChannel * yt2 = &singersYouTubechannel

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();
    system("pause>0");
}
