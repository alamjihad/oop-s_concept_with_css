#include<iostream>
using namespace std;
class Book {
public:
    string Title;
    string Author;
    int* Rates;
    int RatesCounter;
    Book( string title,string tuthor){
        Title = title;
        Author = author;
        RatesCounter = 2;
        Rates = new int [RatesCounter];
        Rates[0] = 4;
         Rates[1] = 5;
        cout << Title + "constroctor invoke\n";
    }
    ~Book(){
        delete Rates;
        Rates = nullptr;
    }
};

int main()
{
    Book book1("Millionaire Fastlane","M.J. DeMarco");
    Book book2("C++ Lamba Story","Bartek Filipek");
    Book book3 = book2;
}