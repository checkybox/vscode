#include <iostream>

using namespace std;

int main()
{
    double x {};
    cin >> x;

    int step = 2;
    long double numerator = (x - step);
    long double denominator = (x - step + 1);
    long double result = (numerator / denominator);

    for(step = 2; step <= 64; step += 2)
    {
        result *= (numerator / denominator);
    }

    cout << result << endl;

    return 0;
}