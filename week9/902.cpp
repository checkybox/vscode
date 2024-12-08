#include <iostream>
#include <cstring>

using namespace std;

void replace(char *source, char *dest)
{
    for(int i = 0; i < strlen(source); i++)
    {
        if(source[i] == '!')
            dest[i] = '.';
        else
            dest[i] = source[i];
    }
}

int main()
{
    char source[1001];
    char dest[1001];

    cin.getline(source, 1001);
    replace(source, dest);
    cout << dest << endl;
}