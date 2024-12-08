#include <iostream>

using namespace std;

double calculate(double a, int n)
{
    double answer = a;

    for(int i = 1; i < n; i++)
    {
        answer += a;
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