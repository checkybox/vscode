#include <iostream>
#include <cmath>

using namespace std;

double calcSqrt(int n)
{
    double answer = sqrt(2);

    for(int i = 1; i < n; i++)
    {
        answer = sqrt(answer + 2);
    }

    return(answer);
}

int main()
{
    int n {};
    cin >> n;

    cout << calcSqrt(n);

    return 0;
}