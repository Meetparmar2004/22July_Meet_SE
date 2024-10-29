// Assume a class cricketer is declared.
// Declare a derived class batsman from cricketer.
//  Data member of batsman :
//      - Total runs
//      - Average runs
//      - best performance.
//  Member functions :
//      - input data
//      - calculate average runs
//      - Display data.
// (Single Inheritance)

#include <iostream>
using namespace std;

class cricketer
{
public:
    string country, cat, name;

    void getdata()
    {
        cout << "Enter Country : ";
        cin >> country;
        cout << "Enter Match Category : ";
        cin >> cat;
        cout << "Enter Batsman Name : ";
        cin >> name;
    }
};

class batsman : public cricketer
{
public:
    float total_runs, match, avg_runs, performance;

    void input()
    {
        cout << "Enter Total Runs : ";
        cin >> total_runs;
        cout << "Enter Total Match : ";
        cin >> match;
        cout << "Enter Best Performance : ";
        cin >> performance;
    }
    void avg()
    {
        avg_runs = total_runs / match;
    }
    void printdata()
    {
        cout << "\nCountry : " << country;
        cout << "\nMatch Category : " << cat;
        cout << "\nBatsman Name : " << name;
        cout << "\nTotal Runs : " << total_runs;
        cout << "\nTotal Match : " << match;
        cout << "\nAverage : " << avg_runs;
        cout << "\nBest Performance : " << performance;
    }
};

int main()
{
    batsman b;
    b.getdata();
    b.input();
    b.avg();
    b.printdata();
}