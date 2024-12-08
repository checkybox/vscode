#include <iostream>
#include <cmath>

using namespace std;

double power(double a, int n)
{
    double output = pow(a, n);
    return output;
}

int main()
{
    double a {};
    int n {};
    cin >> a >> n;

    cout << power(a, n);
}