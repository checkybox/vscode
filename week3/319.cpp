#include <iostream>
#include <cmath>

using namespace std;

unsigned long long factorial(int y)
{
    unsigned long long result = 1;
    for(int i = 1; i <= y; ++i)
    {
        result *= i;
    }

    return(result);
}

double function(double x)
{
    double result {};

    result += x;
    result -= pow(x, 3) / factorial(3);
    result += pow(x, 5) / factorial(5);
    result -= pow(x, 7) / factorial(7);
    result += pow(x, 9) / factorial(9);
    result -= pow(x, 11) / factorial(11);
    result += pow(x, 13) / factorial(13);

    return result;
}

int main()
{
    double x {};
    cin >> x;

    cout << function(x) << endl;

    return 0;
}