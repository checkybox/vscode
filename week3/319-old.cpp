#include <iostream>
#include <cmath>

using namespace std;

unsigned long long calcFactorial(int y) // takes the integer and return a factorial of it
{
    unsigned long long output = 1;
    for(int i = 1; i <= y; ++i)
    {
        output *= i;
    }

    return(output);
}

// takes the number that user has inputted
// and returns the power of that number
long double calcPower(double inputNumber, int power)
{
    long double output = pow(inputNumber, power);
    return(output);
}

long double calculate(double x)
{
    double result = x;
    double numerator = x;
    double denumerator {};

    int powerNum = 1;
    int factorialNum = 1;

    for(int i = 1; i < 7; i++)
    {
        powerNum += 2;
        factorialNum += 2;
        numerator = calcPower(x, powerNum);
        denumerator = calcFactorial(factorialNum);

        if(i % 2 != 0)
        {
            result -= (numerator / denumerator);
        }
        else if(i % 2 == 0)
        {
            result += (numerator / denumerator);
        }
    }

    return(result);
}

int main()
{
    double x {};
    cin >> x;

    cout << calculate(x);

    return 0;
}