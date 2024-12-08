#include <iostream>

using namespace std;

void getRow(int N, int M)
{
    int matrix[N][M];
    int numOfConsecutiveElements[M];
    int max = 0;
    int row = 0;

    // initialize second array to 0
    for(int i = 0; i < N; i++)
        numOfConsecutiveElements[i] = 1;

    // matrix input
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    // main logic
    for(int i = 0; i < N; i++)
    {
        // calculate the number of consecutive elements in the current row
        int temp = matrix[i][0];
        for(int j = 1; j < M; j++)
        {
            if(matrix[i][j] == temp)
                numOfConsecutiveElements[i]++;
        }
    }
    
    // output logic
    for(int i = 0; i < M; i++)
    {
        if(numOfConsecutiveElements[i] == 0)
            continue;
        else if(numOfConsecutiveElements[i] > 0)
        {
            max = numOfConsecutiveElements[i];
            row = i;
        }
    }

    if(max > 1)
        cout << "Longest series is in the string " << row << endl;
    else
        cout << "No series of equal elements" << endl;
}

int main()
{
    int N, M;
    cin >> N >> M;

    getRow(N, M);
}