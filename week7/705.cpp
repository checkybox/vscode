#include <iostream>

using namespace std;

void printSequence(int sequence[], int currentIndex, int n, int k)
{
    if(currentIndex == n)
    {
        for(int i = 0; i < n; ++i)
            cout << sequence[i] << " ";   
        cout << endl;
        return;
    }
    
    for(int i = 1; i <= k; ++i)
    {
        sequence[currentIndex] = i;
        printSequence(sequence, currentIndex + 1, n, k);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    int sequence[6];
    printSequence(sequence, 0, n, k);
}