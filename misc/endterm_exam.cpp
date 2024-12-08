#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string longestWord(string S)
{
    stringstream splitWord(S);
    string currentWord, longestWord;
    
    while(splitWord >> currentWord)
    {
        if(currentWord.length() > longestWord.length())
            longestWord = currentWord;
    }
    
    return longestWord;
}

int main()
{
    string S;

    while(true)
    {
        getline(cin, S);
        if(S.length() >= 1 && S.length() <= 1000)
            break;
    }
    
    cout << longestWord(S) << endl;
}
