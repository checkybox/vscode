#include <iostream>

using namespace std;

int main()
{
    int answer = 2;
    int power {};
    cin >> power;

    if(power == 0)
    {
        answer = 1;
    }

    for(int i = 0; i < (power - 1); i++)
    {
        answer *= 2;
    }
    
    cout << answer;
    
    return 0;
}