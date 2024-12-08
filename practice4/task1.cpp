#include <iostream>

using namespace std;

int main()
{
    int n {};
    cin >> n;

    char word[n];
    char alphabet[26] = {'A','B','C','D','E','F','G',
    'H','I','J','K','L','M','N','O','P','Q','R','S','T',
    'U','V','W','X','Y','Z'};

    cin >> word;

    int frequency[26] = {0};

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(word[i] == alphabet[j])
                frequency[j]++;
        }
    }

    int uniqueLettersCount {};
    for(int i = 0; i < 26; i++)
    {
        if(frequency[i] >= 1)
        {
            uniqueLettersCount++;
        }
    }

    // Output
    cout << uniqueLettersCount << endl;
    for(int i = 0; i < 26; i++)
    {
        if(frequency[i] != 0)
            cout << alphabet[i] << " " << frequency[i] << endl;
    }
}