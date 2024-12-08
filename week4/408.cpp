#include <iostream>

using namespace std;

int main()
{
    int n {};
    cin >> n;

    // if(!(n >= -1000 && n <= 1000))
    // {
    //     cerr << "this won't work." << endl;
    // }

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int temp {};

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for(int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
}