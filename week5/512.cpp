#include <iostream>

using namespace std;

int main()
{
    int n, m = 0;
    cin >> n >> m;

    int matrix[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl;

    for(int i = m - 1; i >= 0; i--)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}