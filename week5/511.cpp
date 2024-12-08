#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];

    int number = n * n;
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < n; i++)
        {
            matrix[i][j] = number;
            number--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}