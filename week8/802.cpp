#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // input the numbers
    int arr[100];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // output the numbers
    for(int i = 0; i < n; i++)
    {
        int *output = &arr[i];
        cout << *output << " ";
    }
}