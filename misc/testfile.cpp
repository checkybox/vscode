#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter the first number: ";
    cout << "Enter the second number: ";
    cin >> x >> y;
    if(x > y)
    {
        cout << "The first number is greater than the second number." << endl;
    }
    else if(x < y)
    {
        cout << "The first number is less than the second number." << endl;
    }
    else
    {
        cout << "The first number is equal to the second number." << endl;
    }
}