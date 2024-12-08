#include <iostream>
#include <string>

using namespace std;

void permutation(string &str, int leftBoundary, int rightBoundary)
{
    if(leftBoundary == rightBoundary)
        cout << str << endl;
    else
    {
        for(int i = leftBoundary; i <= rightBoundary; i++)
        {
            int temp = str[leftBoundary];
            str[leftBoundary] = str[i];
            str[i] = temp;

            permutation(str, leftBoundary + 1, rightBoundary);

            temp = str[leftBoundary];
            str[leftBoundary] = str[i];
            str[i] = temp;
        }
    }
}

int main()
{
    string str;
    cin >> str;
    int rightBoundary = str.size() - 1;
    permutation(str, 0, rightBoundary);
}