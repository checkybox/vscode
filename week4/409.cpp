#include <iostream>

using namespace std;

bool isTimeLegit(int hoursTemp, int minutesTemp, int secondsTemp)
{
    if((hoursTemp >= 0 && hoursTemp <= 12) &&
    (minutesTemp >= 0 && minutesTemp <= 60) &&
    (secondsTemp >= 0 && secondsTemp <= 60))
    {
        return true;
    }
    return false;
}

int main()
{
    int n {};
    cin >> n;

    if(n < 1 || n > 100)
        return 1;

    int hours[n];
    int minutes[n];
    int seconds[n];

    int hoursTemp, minutesTemp, secondsTemp {};

    for(int i = 0; i < n; i++)
    {
        cin >> hoursTemp >> minutesTemp >> secondsTemp;
        if(isTimeLegit(hoursTemp, minutesTemp, secondsTemp))
        {
            // cout << "good" << endl;
            hours[i] = hoursTemp;
            minutes[i] = minutesTemp;
            seconds[i] = secondsTemp;
        }
        else
            return 1;
    }

    
    for(int i = 0; i < n; i++)
    {

    }





    for(int i = 0; i < n; i++)
    {
        cout << hours[i] << " " << minutes[i] << " " << seconds[i] << endl;
    }
}