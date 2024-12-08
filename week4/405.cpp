#include <iostream>

using namespace std;

// Given a sequence of numbers. Find out how many times the maximum element of the sequence meets in the sequence.

// Input data.
// First line - n number,total amount of data in array.
// Then all aray is inputed.

// Output data.
// The one number representing total times of maximum number apperance in the sequence.
// Sample input:
// 7
// 1 4 2 5 2 5 3

// Sample output:
// 2

int main()
{
    int n{};
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max {};
    int index {};
    max = arr[0];

    for(int j = 0; j < n; j++)
    {
        if(arr[j] > max)
        {
            max = arr[j];
            index = j;
        }
    }

    int count {};

    for(int k = 0; k < n; k++)
    {
        if(arr[k] == max)
        count++;
    }

    cout << count;
}