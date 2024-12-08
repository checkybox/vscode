#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input = "";
    string biggestNumber = "";
    string currentNumber = "";
    getline(cin, input);

    // find the biggest number in the input
    for(int i = 0; i <= input.length(); i++)
    {
        // check whether the current character is a digit
        if(isdigit(input[i]))
            currentNumber += input[i];
        else
        {
            // check whether the current number
            // is bigger than the biggest number
            if(currentNumber.length() > biggestNumber.length())
                biggestNumber = currentNumber;
            currentNumber = "";
        }
    }

    // insert spaces in the biggest number
    int count = 0;
    int stringLength = biggestNumber.length();
    int outputLength = 0;

    // calculate the output length
    if(stringLength % 3 == 0)
        outputLength = stringLength + (stringLength / 3) - 1;
    else
        outputLength = stringLength + (stringLength / 3);

    // insert spaces in the biggest number
    for(int i = stringLength - 1, j = outputLength; i >= 0; i--, j--)
    {
        count++;
        if(count == 3 && j > 0)
        {
            biggestNumber.insert(i, " ");
            count = 0;
        }
    }

    cout << biggestNumber << endl;
}