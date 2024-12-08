#include <iostream>

using namespace std;    

// Formula for a leap year: 
// https://learn.microsoft.com/en-us/office/troubleshoot/excel/determine-a-leap-year

int main()
{
    int year {};
    cin >> year;

    if(year % 4 == 0)
    {
        if(year % 100 == 0)
        {
            if(year % 400 == 0)
            {
                cout << "366";
            }
            else
            {
                cout << "365";
            }
        }
        else
        {
            cout << "366";
        }
    }
    else
    {
        cout << "365";
    }

    return 0;
}