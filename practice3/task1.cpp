#include <iostream>

using namespace std;

// 31 days = 1 3 5 7 8 10 12
// 30 days = 4 6 9 11
// 28 days = 2

int daysInMonth(bool isLeap, int b, int c)
{
    int days {};
    if(!isLeap && b == 2)
    {
        days = 28;
    }
    else if(isLeap && b == 2)
    {
        days = 29;
    }
    else if(b == 4 || b == 6 || b == 9 || b == 11)
    {
        days = 30;
    }
    else if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
    {
        days = 31;
    }
    
    return(days);
}

int main()
{
    int a, b, c {};
    cin >> a >> b >> c;

    int day, month, year {};

    bool isLeap = ((c % 4 == 0 && c % 100 != 0) || (c % 400 == 0));

    if(a > 0 && b > 0 && c > 0)
    {
        // check for days
        if(a < daysInMonth(isLeap, b, c))
        {
            day = a + 1;
            month = b;
            year = c;
        }
        else if(a == daysInMonth(isLeap, b, c))
        {
            if(b == 12)
            {
                day = 1;
                month = 1;
                year = c + 1;
            }
            else
            {
                day = 1;
                month = b + 1;
                year = c;
            }
        }

        cout << day << " " << month << " " << year << endl;
    }

    return 0;
}