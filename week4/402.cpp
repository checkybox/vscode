#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double arr[1000];
    int length {};

    for(int i = 0; i < 1000; i++)
    {
        cin >> arr[i];
        length++;
        if(arr[i] == 0)
            break;
    }

    cout << length - 1 << endl;

    for(int i = length - 1; i > 0; i--)
    {
        cout << sqrt(arr[i - 1]) << " ";
    }
}