#include <iostream>

using namespace std;

int main()
{
    int N, M = 0;
    cin >> N >> M;

    int matrix[100][100];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int row, column = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(matrix[i][j] == 0)
            {
                row = i + 1;
                column = j + 1;
            }
        }
    }

    cout << row << " " << column;
}