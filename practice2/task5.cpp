#include <iostream>

using namespace std;

/* 
Task 5. Write a program that accepts a person's age
and outputs their age group based on the following:
• 0-12: Child
• 13-19: Teenager
• 20-64: Adult
• 65 and above: Senior Citizen
Additionally, print special messages for the
youngest and the oldest in the range.
*/

int main()
{
    int age {};
    cout << "Enter person's age: ";
    cin >> age;

    if(age >= 0 && age <= 12)
    {
        cout << "Child" << endl;
        cout << "You are the youngest!" << endl;
    }
    if(age >= 13 && age <= 19)
    {
        cout << "Teenager" << endl;
    }
    if(age >= 20 && age <= 64)
    {
        cout << "Adult" << endl;
    }
    if(age >= 65)
    {
        cout << "Senior Citizen" << endl;
        cout << "You are the oldest!" << endl;
    }   

    return 0;
}