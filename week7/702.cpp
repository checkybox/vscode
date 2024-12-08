#include <iostream>

using namespace std;

void printReverse(int n)
{
    if (n == 0)
        return;

    int element {};
    cin >> element;
    printReverse(n - 1);
    cout << element << " ";
}

int main()
{
    int n;
    cin >> n;
    printReverse(n);
}