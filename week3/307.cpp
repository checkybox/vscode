#include <iostream>

using namespace std;

// 31 days = 1 3 5 7 8 10 12
// 30 days = 4 6 9 11
// 28 days = 2

int main()
{
    int a, b, c {};
    cin >> a >> b >> c;

    bool isLeap = ((c % 4 == 0 && c % 100 != 0) || (c % 400 == 0));

    if(a > 0 && b > 0 && c > 0)
    {
        if(isLeap && b == 2)
        {
            if(a <= 29)
            {
                cout << "yes";
            }
            else
            {
                cout << "no";
            }
        }
        else if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
        {
            if(a <= 31)
            {
                cout << "yes";
            }
            else
            {
                cout << "no";
            }
        }
        else if(b == 4 || b == 6 || b == 9 || b == 11)
        {
            if(a <= 30)
            {
                cout << "yes";
            }
            else
            {
                cout << "no";
            }
        }
        else if(!isLeap && b == 2)
        {
            if(a <= 28)
            {
                cout << "yes";
            }
            else
            {
                cout << "no";
            }
        }
        else
        {
            cout << "no";
        }
    }

    return 0;
}