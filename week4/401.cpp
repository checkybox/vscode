#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int length{};

    for (int i = 0; i < 1000; i++)
    {
        cin >> arr[i];
        length++;
        if (arr[i] == -1)
        {
            break;
        }
    }

    cout << length - 1 << endl;

    for (int i = 0; i < length - 1; i++)
    {
        cout << arr[i] << " ";
    }
}