#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n {}, sum {};
    int startIndex {1}, endIndex {1};
    int *p_startIndex = &startIndex;
    int *p_endIndex = &endIndex;
    bool isStart = false, isEnd = false;

    cout << "Enter the number of elements: ";
    cin >> n;

    // make vector size equal to at least n elements
    vector<int> userInput;
    userInput.reserve(n);

    // write numbers into the vector
    for(int i = 0; i < n; i++)
        cin >> userInput[i];
    
    // find the indeces of the first and last zero
    for(int i = 0; i < n; i++)
    {
        if(userInput[i] == 0 && !(isStart))
        {
            *p_startIndex = i;
            isStart = true;
            continue;
        }

        if(userInput[i] == 0 && !(isEnd))
        {
            *p_endIndex = i;
            isEnd = true;
            break;
        }
    }

    // calculate the sum of the elements between the first and last zero
    for(int j = *p_startIndex + 1; j < *p_endIndex; j++)
        sum += userInput[j];

    cout << "The sum of elements between first two zeroes is " << sum << endl;
}