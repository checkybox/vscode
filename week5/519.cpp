#include <iostream>

using namespace std;

int main()
{
    int n;
    while(true)
    {
        cin >> n;
        if(n % 2 == 1)
            break;
    }

    int matrix[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }

    // for(int i = 0; i < n; i++)
    // {
    //     for(int j = 0; i < n; j++)
    //     {
    //         matrix[i][j] = 0;
    //     }
    // }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}