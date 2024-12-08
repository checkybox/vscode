#include <iostream>

using namespace std;

int main()
{
    int age {};
    cout << "Enter your age: ";
    cin >> age;
    if(age < 16)
    {
        cout << "Too young to drive" << endl;
    }
    else
    {
        if(age >= 16 && age < 18)
        {
            cout << "Eligible for a learner's permit" << endl;
        }
        else if(age >= 18)
        {
            cout << "Eligible for a full driving license" << endl;
            if(age == 18)
            {
                cout << "Just old enough for a full license!" << endl;
            }
        }
    }

    return 0;   
}