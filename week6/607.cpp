#include <iostream>

using namespace std;

int findBiggest(int n, int m)
{
    int matrix[n][m];
    int amount[n]; // number of positives in each row
    int biggest {}; // index of the row with the most positives
    int counter {}; // number of rows with the same amount of positives

    for(int i = 0; i < n; i++)
        amount[i] = 0;

    // input the matrix
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    
    // count the number of positives in each row
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            if(matrix[i][j] > 0)
                amount[i]++;
        }

    // find the row with the most positives
    for(int i = 0; i < n; i++)
        if(amount[i] > biggest)
            biggest = i + 1;

    for(int i = 1; i < n; i++)
        if(amount[i] == amount[i - 1])
            counter++;
    
    if(counter == n - 1)
    {
        cout << "Numbers are equal" << endl;
        return 0;
    }
    else
        return biggest;
}

int main()
{
    int n, m;
    cin >> n >> m;

    findBiggest(n, m);
}