#include <iostream>
#include <vector>

using namespace std;

bool isPositive(int n)
{
    return(n > 0);
}

int main()
{
    int n {}, sum {};
    int *p_n = &n;
    int *p_sum = &sum;
    int max = 0;
    cin >> *p_n;

    // make vector size equal to at least n elements
    vector<int> userInput(n);
    userInput.reserve(n);

    // write numbers into the vector
    for(int i = 0; i < *p_n; i++)
        cin >> userInput[i];
    
    for(int i = 0; i < *p_n; i++)
    {
        if(userInput[i] > max)
            max = i;
    }

    // calculate the sum of positive elements
    for(int i = 0; i < max; i++)
    {
        if(isPositive(userInput[i]))
            *p_sum += userInput[i];
    }

    cout << *p_sum << endl;
}