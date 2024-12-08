#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    for(int i = 0; i < input.length(); i++)
        input[i] = tolower(input[i]);

    if(input.find("aitu") != -1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}