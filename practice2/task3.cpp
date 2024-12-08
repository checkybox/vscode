#include <iostream>

using namespace std;

int main()
{
    double count {};
    cout << "enter a number: ";
    cin >> count;

    if(count < 10)
    {
        cout << "Count is less than 10." << endl;
    }
    
    return 0;
}