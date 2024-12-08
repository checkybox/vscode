#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // create the temporary array
    // to get the length of the input
    char *temp = new char[100];
    cin >> temp;
    int length = strlen(temp);

    // +1 for null terminator
    char *userInput = new char[length + 1];
    char *lefttoright = new char[length + 1];
    char *righttoleft = new char[length + 1];
    strcpy(userInput, temp);

    for(int i = 0; i < length + 1; i++)
    {
        lefttoright[i] = userInput[i];
        righttoleft[i] = userInput[length - i - 1];
    }

    // strcmp returns 0 if the strings are equal
    if(strcmp(lefttoright, righttoleft) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    delete[] temp;
    delete[] userInput;
    delete[] lefttoright;
    delete[] righttoleft;
}