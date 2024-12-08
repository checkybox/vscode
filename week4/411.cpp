#include <iostream>
#include <cmath>
#include <vector>

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

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for(int p = 2; p <= sqrt(p); ++p)
    {
        if(isPrime[p])
        {
            for(int i = p * p; i <= n; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    for(int i = 2; i <= n; ++i)
    {
        if(isPrime[i])
            cout << i << " ";
    }
}