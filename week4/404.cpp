#include <iostream>

using namespace std;

int main()
{
    int n{};
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min {};
    int index {};
    min = arr[0];

    for(int j = 0; j < n; j++)
    {
        if(arr[j] < min)
        {
            min = arr[j];
            index = j;
        }
    }

    cout << index;
}