#include <iostream>

using namespace std;

// this function returns the length of a C string
// from lecture 8, slide 9
unsigned int length(const char* str)
{
    unsigned int len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    char x[] = "hello";
    cout << length(x) << endl;
}