#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string table[5][2] =
    {
    "Tom", "555-3322",
    "Mary", "555-8976",
    "Jon", "555-1037",
    "Rachel", "555-1400",
    "Sherry", "555-8873"
    };

    string userInput;
    getline(cin, userInput);
    for(int i = 0; i < 5; i++)
    {
        if(strcmp(table[i][0].c_str(), userInput.c_str()) == 0)
        {
            cout << table[i][1];
            break;
        }
    }
}