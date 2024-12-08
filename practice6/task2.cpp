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
    int *p_sum = &sum;
    cout << "Enter the number of elements: ";
    cin >> n;

    // make vector size equal to at least n elements
    vector<int> userInput(n);
    userInput.reserve(n);

    // write numbers into the vector
    for(int i = 0; i < n; i++)
        cin >> userInput[i];
    
    // calculate the sum of positive elements
    for(int i = 0; i < n; i++)
    {
        if(isPositive(userInput[i]))
            *p_sum += userInput[i];
    }

    cout << "The sum of all positive numbers in array is " << *p_sum << endl;
}