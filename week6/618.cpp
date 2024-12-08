#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int counter = 0;
    int valid = 0;
    char expression[N];
    char numbers[14] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '-', '*', '/'};

    // input expression
    for(int i = 0; i < N; i++)
    {
        cin >> expression[i];
    }

    // check every symbol in expression
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 14; j++)
        {
            if(expression[i] == numbers[j])
            {
                if(expression[i] == '+' ||
                expression[i] == '-' ||
                expression[i] == '*' ||
                expression[i] == '/')
                {
                    // check whether a sign is present as
                    // first or last symbol
                    if(i == 0 || i == N - 1)
                    {
                        cout << "NO" << endl;
                        return 0;
                    }

                    // check whether the next element
                    // is also a sign
                    if(i + 1 < N)
                    {
                        if(expression[i+1] == '+' ||
                        expression[i+1] == '-' ||
                        expression[i+1] == '*' ||
                        expression[i+1] == '/')
                        {
                            cout << "NO" << endl;
                            return 0;
                        }
                    }
                    else
                    {
                        cout << "NO" << endl;
                        return 0;
                    }
                }
                valid++;
                continue;
            }
        }
        counter++;
    }

    if(valid >= counter)
    {
        cout << "YES" << endl;
        return 0;
    }
    else
    {
        cout << "NO" << endl;
        return 0;
    }
}