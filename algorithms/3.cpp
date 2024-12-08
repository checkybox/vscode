#include <iostream>

using namespace std;

void drawPictureFrame(char s, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if((i != 0 && i != n - 1) && (j != 0 && j != m - 1))
                cout << " ";
            else
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
    drawPictureFrame(s, n, m);
}