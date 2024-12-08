#include <iostream>

using namespace std;

int main()
{
    int N = 0, M = 0;
    cin >> N >> M;

    int matrix[N][M];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int maxColumnIndex = 0;
    int maxSum = 0;

    for(int j = 0; j < M; j++)
    {
        int columnSum = 0;
        for(int i = 0; i < N; i++)
        {
            columnSum += matrix[i][j];
        }
        if(columnSum > maxSum)
        {
            maxSum = columnSum;
            maxColumnIndex = j;
        }
    }   
    cout << maxColumnIndex << endl;
}