#include <iostream>

using namespace std;

void checklife(int arr[10][10], int arr2[10][10], int i, int j, int n)
{
    int counter0 = 0;
    int counter1 = 0;
    if (arr[i][j] == 0)
    {
        if(i - 1 >= 0)
        {
            if (arr[i - 1][j - 1] == 1)
                counter0++;
            if (arr[i - 1][j] == 1)
                counter0++;
            if (arr[i - 1][j + 1] == 1)
                counter0++;
        }

        if(j - 1 >= 0)
            if (arr[i][j - 1] == 1)
                counter0++;
        if(j + 1 < n)
            if (arr[i][j + 1] == 1)
                counter0++;

        if(i + 1 < n)
        {
            if (arr[i + 1][j - 1] == 1)
                counter0++;
            if (arr[i + 1][j] == 1)
                counter0++;
            if (arr[i + 1][j + 1] == 1)
                counter0++;
        }

        if(counter0 == 3)
            arr2[i][j] = 1;
        else
            arr2[i][j] = 0;
    }

    if(arr[i][j] == 1)
    {
        if(i - 1 >= 0)
        {
            if (arr[i - 1][j - 1] == 1)
                counter1++;
            if (arr[i - 1][j] == 1)
                counter1++;
            if (arr[i - 1][j + 1] == 1)
                counter1++;
        }

        if(j - 1 >= 0)
            if (arr[i][j - 1] == 1)
                counter1++;
        if(j + 1 < n)
            if (arr[i][j + 1] == 1)
                counter1++;

        if(i + 1 < n)
        {
            if (arr[i + 1][j - 1] == 1)
                counter1++;
            if (arr[i + 1][j] == 1)
                counter1++;
            if (arr[i + 1][j + 1] == 1)
                counter1++;
        }

        if(counter1 < 2 || counter1 > 3)
            arr2[i][j] = 0;
        else if (counter1 == 2 || counter1 == 3)
            arr2[i][j] = 1;
    }
}



int main()
{
    int arr[10][10],arr2[10][10], n, t, amount = 0;
    cin >> n >> t;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

  cout << endl;

    while (amount < t)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                checklife(arr, arr2, i, j, n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                arr[i][j] = arr2[i][j];
        amount++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}