#include <iostream>

using namespace std;

int main()
{
    int n {};
    while(true)
    {
        cin >> n;
        if(n >= 2 && n <= 10000)
            break;
    }

    for(int i = 2; i <= n; i ++)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
            cout << i << " ";
        if(i > 7)
        {
            if((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0) || (i % 7 == 0))
                continue;
            else
                cout << i << " ";
        }
    }
}