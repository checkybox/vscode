#include <iostream>
#include <cstring>

using namespace std;

const int MAX_N = 200;

int(countOccurrence(char arr[MAX_N], char ch));

int main()
{
    char ch1, ch2;
    char str1[MAX_N], str2[MAX_N];
    cin >> ch1 >> ch2;
    cin >> str1 >> str2;
    cout << countOccurrence(str1, ch1) << " " << ch1 << " characters in " << str1 << endl;
    cout << countOccurrence(str2, ch2) << " " << ch2 << " characters in " << str2 << endl;
    return 0;
}

int countOccurrence(char arr[MAX_N], char ch)
{
    int result = 0;
    int arrLength = strlen(arr);
    for(int i = 0; i < arrLength; i++)
        if(arr[i] == ch)
            result++;
    return result;
}