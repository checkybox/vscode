#include <iostream>

using namespace std;

bool election(bool x, bool y, bool z)
{
    bool output {};
    int placeholder {};
    placeholder += x;
    placeholder += y;
    placeholder += z;

    if(placeholder > 1)
        output = 1;
    else
        output = 0;

    return output;
}

int main()
{
    bool x, y, z {};
    cin >> x >> y >> z;

    cout << election(x, y, z);
}