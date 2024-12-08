#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int matrix[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int sum {};
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(i > j)
                sum += matrix[i][j];
        }
    }
    cout << sum;
}