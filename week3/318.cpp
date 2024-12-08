#include <iostream>
#include <cmath>

using namespace std;

double calculate(double a, int n)
{
    double numerator = 1;
    double denumerator = a;
    double answer = numerator / denumerator;

    for(int i = 1; i <= n; i++)
    {
        denumerator = pow(a, 2*i);
        answer += (numerator / denumerator);
    }

    return(answer);
}

int main()
{
    double a {};
    int n {};
    cin >> a >> n;

    cout << calculate(a, n);
    
    return 0;
}