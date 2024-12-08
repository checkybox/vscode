#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double result;
    double temp;
    for(int i = 1; i <= 10; i++)
    {
        cin >> temp;
        result += pow(temp, i);
    }

    cout << result;
}