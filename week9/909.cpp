#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input = "";
    int sumOdd = 0;
    int sumEven = 0;
    getline(cin, input);

    for(int i = 0; i < input.length(); i++)
    {
        if(isdigit(input[i]))
        {
            if((i + 1) % 2 == 0)
                sumEven += input[i] - '0';
            else if((i + 1) % 2 != 0)
                sumOdd += input[i] - '0';
        }
    }

    if((sumOdd - sumEven) % 11 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}