#include <iostream>

using namespace std;

double calculateRegular(double Regterm)
{
    double Final = (70 - (Regterm * 0.6)) * 10 / 4;
    if(Final < 50)
        Final = 50;
    return Final;
}

double calculateHigh(double Regterm)
{
    double Final = (90 - (Regterm * 0.6)) * 10 / 4;
    if(Final < 50)
        Final = 50;
    return Final;
}

int main()
{
    double Regterm, Final;
    cout << "Enter your regterm: " << '\n';
    cin >> Regterm;
    cout << "Scholarship:" << '\n';
    cout << "You need to get " << calculateRegular(Regterm) << " on the final exam" << '\n';
    cout << "High Scholarship:" << '\n';
    cout << "You need to get " << calculateHigh(Regterm) << " on the final exam" << '\n';
}