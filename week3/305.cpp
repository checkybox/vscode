#include <iostream>

using namespace std;

int main()
{
    double a, b, c {};
    cin >> a >> b >> c;
    if(a > 0 && b > 0 && c > 0)
    {
        if(a + b > c && a + c > b && b + c > a)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}