//20 minutes after;
#include<iostream>
using namespace std;
struct YouTubeChannel
{
    string Name;
    int SubscribersCount;

    YouTubeChannel( string name,int subscribersCount)
    {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    bool operator==( constYouTubeChannel&channel)
    const 0{
        return this->Name == channel.Name;
    }
};
ostream& operator<<(ostream& COUT,YouTubeChannel& ytChannel)
{
    COUT<<"Name: "<<ytChannel.Name << endl;
    COUT<<"Subscribers: "<<ytChannel.SubscribersCount << endl;
    return COUT;
}
struct MyCollection
{
    list<YouTubeChannel>myChannels

    void operator+=(YouTubeChannel& channel)
    {
        this->myChannels.push_back(channel);
    }
        void operator-=(YouTubeChannel& channel)
    {
        this->myChannels.remove(channel);
    }
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection)
{
    for(YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;
    return COUT;
}

int main()
{
    YouTubeChannel yt1 = YouTubeChannel ("CodeBeauty",75000);
    YouTubeChannel yt2 = YouTubeChannel ("My second channel",80000);
   // cout << yt1;
   // operator<<(cout,yt1);
   MyCollection myCollection;
   myCollection += yt1;
   myCollection += yt2;
   cout << myCollection;
    cin.get();

    
}