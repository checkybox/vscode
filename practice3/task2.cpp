#include <iostream>

using namespace std;

int main()
{
    double result;

    for(int i = 1; i <= 50; i++)
    {
        if(i % 2 == 0)
        {
            result += i * i;
        }
    }

    cout << result;
}