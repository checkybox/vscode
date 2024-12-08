#include <iostream>

using namespace std;

int main()
{
    int n {};
    int answer = 1;
    cin >> n;

    if(n == 0)
    {
        answer = 1;
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            answer *= i;
        }
    }

    cout << answer << endl;

    return 0;
}