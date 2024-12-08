#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n {};
    cin >> n;

    long double answer {};
    for(int i = 1; i <= 50; i++)
    {
        answer += (1 / pow(i, 3));
    }

    cout << answer;
}