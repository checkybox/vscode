#include <iostream>
#include <cmath>

using namespace std;

void calcsqrt(double a, double b, double c)
{
    double discriminant = (b * b) - (4 * a * c);
    
    if (discriminant < 0)
    {
        cout << "no solution" << endl;
    }
    else if (discriminant == 0)
    {
        double solution1 = -b / (2 * a);
        if (solution1 == -0)
        {
            solution1 = 0;
        }
        cout << solution1 << endl;
    }
    else
    {
        double solution1 = (-b - sqrt(discriminant)) / (2 * a);
        double solution2 = (-b + sqrt(discriminant)) / (2 * a);
        if(solution1 > solution2)
            cout << solution1 << " " << solution2 << endl;
        else
            cout << solution2 << " " << solution1 << endl;
    }
}

int main()
{
    double a, b, c {};
    cin >> a >> b >> c;

    if(a == 0)
    {
        return 1;
    }
    
    calcsqrt(a, b, c);

    return 0;
}