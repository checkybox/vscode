#include <iostream>

using namespace std;

int main()
{
    int N, M = 0;
    cin >> N;
    M = N;

    int matrix[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // sum of the first diagonal (top right --> bottom left)
    int sum1 {};
    for(int i = 0; i < N; i++)
    {
        sum1 += matrix[i][i];
    }
    cout << sum1 << endl;

    int sum2 {};
    int j = 0;
    for(int i = N - 1; i >= 0; i--)
    {
        sum2 += matrix[i][j];
        j++;
    }
    cout << sum2;
}