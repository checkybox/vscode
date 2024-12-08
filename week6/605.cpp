#include <iostream>

using namespace std;

char getSign(int x, int y)
{
    char output;

    if(x > y)
        output = '>';
    else if(x < y)
        output = '<';
    else if(x == y)
        output = '=';

    return output;
}

int main()
{
    int x, y {};
    cin >> x >> y;

    cout << getSign(x, y);
}