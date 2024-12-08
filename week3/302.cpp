#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c {};
    cin >> a >> b >> c;

    if(a <= b && b <= c)
    {
        a *= 2;
        b *= 2;
        c *= 2;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }
    else
    {
        a = abs(a);
        b = abs(b);
        c = abs(c);
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    }

    return 0;
}