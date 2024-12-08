#include <iostream>

using namespace std;

void countLetter(char *ch, char *str)
{
    int count = 0;
    for(int i = 0; i < 20; i++)
        if(str[i] == *ch)
            count++;

    cout << count << " " << *ch << " in " << str << endl;
}

int main()
{
    int n;
    cin >> n;
    char ch;
    char str[20];
    for(int i = 0; i < n; i++)
    {
        cin >> ch >> str;
        countLetter(&ch, str);
    }
}