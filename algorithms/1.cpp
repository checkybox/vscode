#include <iostream>

using namespace std;

void drawSquare(char s, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int i = 0; i < n; i++)
        {
            cout << s;
            // if(i != n)
            //     cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    char s;
    int n;
    cin >> s >> n;
    drawSquare(s, n);
}