#include <iostream>

using namespace std;

/*
Task 4. Write a program that takes a student's score
and outputs the letter grade. In addition to letter grades,
print a message if the student has the highest grade
or the lowest grade in the class.
*/

void calcGPA(double score)
{
    if(score > 100)
    {
        cout << "you can't get more than 100 percent score..." << endl;
    }
    if(score >= 95 && score <= 100)
    {
        cout << "Grade: A" << endl;
        cout << "You have the highest grade!" << endl;
    }
    if(score >= 90 && score < 95)
    {
        cout << "Grade: A-" << endl;
    }
    if(score >= 85 && score < 89)
    {
        cout << "Grade: B+" << endl;
    }
    if(score >= 80 && score < 85)
    {
        cout << "Grade: B" << endl;
    }
    if(score >= 75 && score < 80)
    {
        cout << "Grade: B-" << endl;
    }
    if(score >= 70 && score < 74)
    {
        cout << "Grade: C+" << endl;
    }
    if(score >= 65 && score < 69)
    {
        cout << "Grade: C" << endl;
    }
    if(score >= 60 && score < 65)
    {
        cout << "Grade: C-" << endl;
    }
    if(score >= 55 && score < 60)
    {
        cout << "Grade: D+" << endl;
    }
    if(score >= 50 && score < 55)
    {
        cout << "Grade: D" << endl;
    }
    if(score >= 25 && score < 50)
    {
        cout << "Grade: FX" << endl;
    }
    if(score >= 0 && score < 25)
    {
        cout << "Grade: F" << endl;
        cout << "You have the lowest grade!" << endl;
    }
}

int main()
{
    double score {};
    cout << "enter student's score (0-100): ";
    cin >> score;

    calcGPA(score);

    return 0;
}