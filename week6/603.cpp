#include <iostream>

using namespace std;

bool myXor(bool x, bool y)
{
    bool output;
    if((x == 1 && y == 1) || (x == 0 && y == 0))
    {
        output = 0;
    }
    else
    {
        output = 1;
    }

    return output;
}

int main()
{
    bool x, y {};
    cin >> x >> y;

    cout << myXor(x, y);
}