#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char alphabet[26 + 1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // use temporary array to get the length of the input
    char *temp = new char[100];
    cin >> temp;
    int length = strlen(temp);

    // use the length to create new arrays
    // copy the string from temp to cypher and delete temp
    char *cypher = new char[length + 1];
    char *decypher = new char[length + 1];
    strcpy(cypher, temp);
    delete[] temp;

    // add null-terminators to the end of the arrays
    cypher[length + 1] = '\0';
    decypher[length + 1] = '\0';

    int K;
    cin >> K;

    for(int i = 0; i < length + 1; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(cypher[i] == alphabet[j])
            {
                if(j - K >= 0)
                    decypher[i] = alphabet[j - K];
                else if(j - K < 0)
                    decypher[i] = alphabet[j - K + 26];
            }
        }
    }

    cout << decypher << endl;
    delete[] cypher;
    delete[] decypher;
}