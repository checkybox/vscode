#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int matrix[N][M];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int row = -1;
    int column = -1;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(matrix[i][j] == -1)
            {
                row = i + 1;
                column = j + 1;
            }
        }
    }

    cout << row << " " << column;
}