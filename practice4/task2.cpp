#include <iostream>

using namespace std;

int main()
{
    int n {};
    cin >> n;

    if(!(n >= -1000 && n <= 1000))
    {
        cerr << "this won't work." << endl;
    }

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp {};

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}