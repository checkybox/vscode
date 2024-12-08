#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // make a temporary array to get the input number length
    char *temp = new char[100];
    cin.getline(temp, 100);

    // calculate the output length
    // and declare the output array
    int inputLength = strlen(temp);
    int outputLength;
    if(inputLength % 3 == 0)
        outputLength = inputLength + (inputLength / 3) - 1;
    else 
        outputLength = inputLength + (inputLength / 3);

    char output[outputLength + 1]; // +1 for the null terminator
    output[outputLength] = '\0';

    // copy the number to the output array
    // free the the memory of the temporary array
    strcpy(output, temp);
    delete[] temp;

    int count = 0;
    for(int i = inputLength - 1, j = outputLength - 1; i >= 0; i--, j--)
    {
        output[j] = output[i]; // shift the numbers up
        count++;
        if(count == 3 && j > 0)
        {
            j--;
            output[j] = ' ';
            count = 0;
        }
    }
    cout << output << endl;                                                                                                                                                      
}