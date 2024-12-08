#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimal(int binary[], int n)
{
    int output = 0;
    for(int i = 0; i < n; i++)
    {
        if(binary[i] == 0)
            continue;
        else if(binary[i] == 1)
        {
            output += pow(2, n - i - 1);
        }
    }

    return output;
}

int main()
{
    int n;
    cin >> n;

    char input[n];
    for(int i = 0; i < n; i++)
        cin >> input[i];

    int binary[n];
    for(int i = 0; i < n; i++)
        binary[i] = input[i] - '0';

    cout << binaryToDecimal(binary, n) << endl;
}