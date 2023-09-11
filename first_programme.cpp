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
};
int main()
{
    YouTubeChannel ytchannel;
    ytchannel.Name ="CodeBeauty";
    ytchannel.OwnerName ="Saldina";
    ytchannel.SubscribersCount = 1800;
    ytchannel.PublishedVideoTitels = {"c++ for beginers  Video 1", "HTML & CSS Video 1","C++ OOP Video 1"};
    cout << "Name: " << ytchannel.Name << endl;
    cout << "OwnerName: " << ytchannel.OwnerName << endl;
    cout << "SubscribersCount: " << ytchannel.SubscribersCount << endl;
    cout << "Videos:: "<< endl;
    for(string videoTitle : ytchannel.PublishedVideoTitels)
    {
        cout << videoTitle << endl;
    }
    return 0;
}
