#include <iostream>
#include <cmath>

using namespace std;

int min(int a, int b, int c, int d)
{
    int output = min(min(min(a, b), c), d);
    return output;
}

int main()
{
    int a, b, c, d {};
    cin >> a >> b >> c >> d;

    cout << min(a, b, c, d);
}