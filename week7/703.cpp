#include <iostream>

using namespace std;

void printReverse(int n)
{
    if (n == 0)
        return;

    char word[21]; // max length 20 + 1 for null terminator
    cin.getline(word, 21);
    printReverse(n - 1);
    cout << word << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(); // clean the input buffer
    printReverse(n);
}