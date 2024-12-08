#include <iostream>

using namespace std;

int main()
{
    int n {};
    cin >> n;
    char arr[n];
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[n];
        if(arr[n] == 'A')
        {
            count++;
        }
    }

    cout << count;
}