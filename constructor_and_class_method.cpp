#include<iostream>
#include<list>
using namespace std;
class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string>PublishedVideoTitels;

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
};


int main()
{
    YouTubeChannel ytchannel("CodeBeauty","Saldina");
    ytchannel.PublishedVideoTitels.push_back("C++ for Beginners");
    ytchannel.PublishedVideoTitels.push_back("HTML & CSS for Beginners");
    ytchannel.PublishedVideoTitels.push_back("C++ OOP");

    YouTubeChannel ytchannel2("AmySings","Amy");

    ytchannel.GetInfo();
    ytchannel2.GetInfo();

    /*cout << "Name: " << ytchannel2.Name << endl;
    cout << "OwnerName: " << ytchannel2.OwnerName << endl;
    cout << "SubscribersCount: " << ytchannel2.SubscribersCount << endl;
    cout << "Videos: "<< endl;
    for(string videoTitle : ytchannel2.PublishedVideoTitels)
    {
        cout << videoTitle << endl;
    }*/


    return 0;
}
