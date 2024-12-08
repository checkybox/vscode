#include <iostream>

using namespace std;

int getMaxShipSize(int matrix[][10])
{
    int length = 0;
    int counter = 0;
    int largestInRow[10];
    int largestInColumn[10];

    // check if all elements are 0
    int allZero = 0;
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            allZero += matrix[i][j];
    if(allZero == 0)
        return 10;

    // initialize two supplementary arrays to 0
    for(int i = 0; i < 10; i++)
    {
        largestInRow[i] = 0;
        largestInColumn[i] = 0;
    }

    // loop for rows
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(matrix[i][j] == 0)
            {
                counter++;
                if(largestInRow[i] < counter)
                    largestInRow[i] = counter;
            }
            else if(matrix[i][j] == 1)
            {
                if(matrix[i][j - 1] == 0)
                    largestInRow[i] = counter;
                counter = 0;
            }
        }
        counter = 0;
    }

    counter = 0;

    // loop for columns
    for(int j = 0; j < 10; j++)
    {
        for(int i = 0; i < 10; i++)
        {
            if(matrix[i][j] == 0)
            {
                counter++;
                if(largestInColumn[j] < counter)
                    largestInColumn[j] = counter;
            }
            else if(matrix[i][j] == 1)
            {
                if(matrix[i][j - 1] == 0)
                    largestInColumn[j] = counter;
                counter = 0;
            }
        }
        counter = 0;
    }

    // find the largest of largests
    for(int i = 0; i < 10; i++)
    {
        if(length < largestInRow[i])
            length = largestInRow[i];
        if(length < largestInColumn[i])
            length = largestInColumn[i];
    }

    return length;
}

int main()
{
    int matrix[10][10];
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            cin >> matrix[i][j];

    cout << getMaxShipSize(matrix);

    // for debugging purposes
    
    // cout << "Enter 'q' to exit: ";
    // char ch;
    // while (cin >> ch && ch != 'q')
    // {
    //     cout << "Invalid input. Enter 'q' to exit: ";
    // }
}