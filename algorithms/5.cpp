#include <iostream>

using namespace std;

void drawPlusFrame(char s, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if((j != 0 && j != m) && (j != (m / 2 + 1)))
                cout << s;
        }
        cout << endl;
    }
}

int main()
{
    char s;
    int n, m;
    cin >> s >> n >> m;
    drawPlusFrame(s, n, m);
}