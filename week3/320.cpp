#include <iostream>
#include <cmath>

using namespace std;

long double expression(double x, double a, int n)
{
    long double result = pow((x + a), 2);
    for(int i = 2; i < n; i++)
    {
        result += a;
        result = pow(result, 2);
    }
    return result;
}

int main()
{
    double x = 0;
    double a = 0;
    int n = 0;
    cin >> x >> a >> n;

    cout << expression(x, a, n);
}