#include <iostream>
#include <string>
#include <vector>

using namespace std;

void createQuest()
{
    Quest quest;
}

void deleteQuest()
{
    // delete quest
}

int main()
{
    struct Quest
    {
        string name;
        string description;
        double payment;
        double timeToFinish;
        bool finished = false;
    }

    // create an array of functions
    vector<void (*)()> functions = {createQuest, deleteQuest};

    cout << "Do you want to create a quest?" << '\n';
    cout << "1 - yes\n2 - no" << '\n';
    int choice;
    cin >> choice;
    functions[choice - 1]();
}