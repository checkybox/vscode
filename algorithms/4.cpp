#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[n];
    int key;

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}