#include <iostream>

using namespace std;

int main()
{
    int year, dayOfTheWeek;
    int week = 7;
    int codeOfOctober = 1;
    cin >> year;

    int codeOfTheYear = (6 + year % 100 + year % 100 / 4) % 7;

    for(int i = 1; i <= 7; i++)
    {
        dayOfTheWeek = (i + codeOfOctober + codeOfTheYear) % 7;
        if(dayOfTheWeek == 1)
        {
            cout << i;
        }
    }

    return 0;
}