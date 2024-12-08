#include <iostream>

using namespace std;

int main()
{
    long int result = 1;

    for(int i = 1; i <= 10; ++i)
    {
        result *= i;
        cout << i << "! = " << result << "\n";
    }
}