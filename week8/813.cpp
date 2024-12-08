#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // ip address is at most 15 characters long
    // +1 for null-terminator
    char *temp = new char[16];
    cin.getline(temp, 16);
    int length = strlen(temp);
    int startPoint = 0;
    int endPoint = 0;

    char *ipaddress = new char[length + 1]; // +1 for null-terminator
    strcpy(ipaddress, temp);
    delete[] temp;

    for(int i = 0; i < length + 1; i++)
    {
        if(ipaddress[i] == '.')
        {
            int endPoint = i;
            for(int j = startPoint; j < endPoint; j++)
            {
                cout << ipaddress[j];
                continue;
            }
        }
    }
}