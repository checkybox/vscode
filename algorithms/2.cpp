#include <iostream>

using namespace std;

void drawSquare(char s, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int i = 0; i < m; i++)
        {
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
    drawSquare(s, n, m);
}