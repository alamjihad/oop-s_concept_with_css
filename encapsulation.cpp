#include<iostream>
#include<list>
using namespace std;
class YouTubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string>PublishedVideoTitels;

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
};


int main()
{
     YouTubeChannel ytchannel("CodeBeauty","Saldina");
    ytchannel.PublishedVideo("C++ for Beginners");
    ytchannel.PublishedVideo("HTML & CSS for Beginners");
    ytchannel.PublishedVideo("C++ OOP");

    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.Subscribe();
    ytchannel.UnSubscribe();
    ytchannel.GetInfo();

    system("pause>0");
}
