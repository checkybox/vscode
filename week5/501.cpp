#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M = 0; // N - rows, M - columns
    cin >> N >> M;
    
    // vector<vector<int>> matrix(N, vector<int>(M));
    int matrix[N][M];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int min = matrix[0][0];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }

    cout << min;

    // int temp {};
    // for(int i = 0; i < N; i++)
    // {
    //     for(int j = 0; j < M; j++)
    //     {
    //         if(matrix[i][j] > matrix[i][j + 1])
    //         {
    //             temp = matrix[i][j];
    //             matrix[i][j] = matrix[i][j + 1];
    //             matrix[i][j + 1] = temp;
    //         }
    //     }
    // }
}