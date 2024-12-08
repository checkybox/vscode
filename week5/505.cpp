#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int firstMatrix[N][N];
    int secondMatrix[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> firstMatrix[i][j];
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> secondMatrix[i][j];
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << firstMatrix[i][j] + secondMatrix[i][j] << " ";
        }
        cout << endl;
    }
}