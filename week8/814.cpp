#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int x = 0, y = 0;
    int length = 0;
    int steps = 0;

    for(int i = 0; i < 3; i++)
    {
        char *temp = new char[100];
        cin >> temp;
        cin >> steps;

        length = strlen(temp);
        char *direction = new char[length + 1]; // +1 for null-terminator
        strcpy(direction, temp); // copy from temp to direction
        direction[length + 1] = '\0'; // add null-terminator

        if(strcmp(direction, "North") == 0)
            x += steps;
        else if(strcmp(direction, "East") == 0)
            y += steps;
        else if(strcmp(direction, "South") == 0)
            x -= steps;
        else if(strcmp(direction, "West") == 0)
            y -= steps;
        else
            continue;

        delete[] temp;
        steps = 0;
    }
    cout << x << " " << y << endl;
}