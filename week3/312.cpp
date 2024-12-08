#include <iostream>
#include <cmath>

using namespace std;

double calculate_expression(int n)
{
    double output = 1;

    for(int i = 1; i <= n; i++)
    {
        double expression = (1 + (1/(pow(i, 2))));
        output *= expression;
    }

    return(output);
}

int main()
{
    int n {};
    cin >> n;

    cout << calculate_expression(n);

    return 0;
}