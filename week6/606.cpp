#include <iostream>

using namespace std;

int main()
{   
    int n {};
    while(true)
    {
        cin >> n;
        if(n >= 1 && n <= 100)
            break;
    }

    int array1[n];
    int array2[n];

    for(int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> array2[i];
    }

    int positiveCountArr1 {};
    int positiveCountArr2 {};
    for(int i = 0; i < n; i++)
    {
        if(array1[i] > 0)
            positiveCountArr1++;
    }

    for(int i = 0; i < n; i++)
    {
        if(array2[i] > 0)
             positiveCountArr2++;
    }
    
    if(positiveCountArr1 > positiveCountArr2)
    {
        cout << "Number of positives in the first array is greater";
    }   
    else if(positiveCountArr1 < positiveCountArr2)
    {
        cout << "Number of positives in the second array is greater";
    }
    else if(positiveCountArr1 == positiveCountArr2)
    {
        cout << "Numbers are equal";
    }
}