#include <iostream>
#include <cstring>

using namespace std;

void mostRecent(char *text, char *word)
{
    char ch;
    // the word is written into the word array
    // when the space is found, the word array is reset
    for(int i = 0; i <= strlen(text); i++)
    {
        if(text[i] == ' ')
            for(int j = 0; j <= 101; j++)
                word[j] = '0';
        else
            word[i] = text[i];
    }

    // remove trash symbols from word array
    // and make the output uppercase
    for(int i = 0; i <= strlen(word); i++)
    {
        if(word[i] != '0' && isalpha(word[i]))
        {
            ch = toupper(word[i]);
            cout << ch;
        }
    }
    
    cout << endl;
}

int main()
{
    char input[1001];
    char word[101];

    cin.getline(input, 1001);
    mostRecent(input, word);
}