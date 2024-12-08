#include <iostream>
#include <cmath>

using namespace std;

// quadratic formula
// -b +- sqrt(b^2 - 4ac) / 2a

int findRoots(double a, double b, double c)
{
    // ax^2 + bx + c = 0
    double solution1 = ((-b - sqrt((b*b) - (4*a*c))) / (2*a));
    double solution2 = ((-b + sqrt((b*b) - (4*a*c))) / (2*a));
    
    if(isnan(solution1) || isnan(solution2))
    {
        cout << "No real roots" << endl;
    }
    else if(solution1 == solution2)
    {
        cout << "One solution: " << solution1 << endl;
    }
    else if(solution1 != solution2)
    {
        cout << "First solution: " << solution1 << endl;
        cout << "Second solution: " << solution2 << endl;
    }
    
    return 0;
}

int main()
{
    cout << "Quadratic equation formula: ax^2 + bx + c = 0" << endl;
    cout << "Please enter the a, b and c coefficients in one line: ";
    double a, b, c {};
    cin >> a >> b >> c;

    if(a == 0)
    {
        cerr << "main coefficient cannot be 0" << endl;
        return 1;
    }

    findRoots(a, b, c);

    return 0;
}