#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int countOdd = 0;
    int countEven = 0;
    int *odd = new int[n];
    int *even = new int[n];
    int *arr = new int[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            // add all odd numbers to the odd array
            odd[countOdd] = arr[i];
            countOdd++;
        }
        else if(arr[i] % 2 == 0)
        {
            // add all even numbers to the even array
            even[countEven] = arr[i];
            countEven++;
        }
    }

    for(int i = 0; i < countOdd; i++)
        cout << odd[i] << " ";

    for(int i = 0; i < countEven; i++)
        cout << even[i] << " ";

    delete[] odd;
    delete[] even;
    delete[] arr;
}