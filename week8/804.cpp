#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    char *temp = new char[100];
    cin.getline(temp, 100);
    int length = strlen(temp);

    char *word = new char[length + 1];
    char *output = new char[length + 1];
    strcpy(word, temp);
    delete[] temp;

    word[length + 1] = '\0';
    output[length + 1] = '\0';

    int zero = 0;
    int *j = &zero;
    for(int i = 0; i < length + 1; i++)
    {
        if(isalpha(word[i]))
        {
            output[*j] = word[i];
            (*j)++;
        }
        else
            continue;
    }
    cout << output << endl;
    delete[] word;
    delete[] output;
}