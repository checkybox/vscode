#include <iostream>

using namespace std;

int main()
{
    int time1[3];
    int time2[3];

    cin >> time1[0] >> time1[1] >> time1[2];
    cin >> time2[0] >> time2[1] >> time2[2];

    int time1Seconds = time1[0] * 3600 + time1[1] * 60 + time1[2];
    int time2Seconds = time2[0] * 3600 + time2[1] * 60 + time2[2];
    int timeDiff = time2Seconds - time1Seconds;

    int hours = timeDiff / 3600;
    int minutes = (timeDiff % 3600) / 60;
    int seconds = (timeDiff % 3600 % 60);

    if(hours < 10)
        if(minutes < 10)
            if(seconds < 10)
                cout << "0" << hours << ":" << "0" << minutes << ":" << "0" << seconds << endl;
            else
                cout << "0" << hours << ":" << "0" << minutes << ":" << seconds << endl;
        else
            if(seconds < 10)
                cout << "0" << hours << ":" << minutes << ":" << "0" << seconds << endl;
            else
                cout << "0" << hours << ":" << minutes << ":" << seconds << endl;
    else
        if(minutes < 10)
            if(seconds < 10)
                cout << hours << ":" << "0" << minutes << ":" << "0" << seconds << endl;
            else
                cout << hours << ":" << "0" << minutes << ":" << seconds << endl;
        else
            if(seconds < 10)
                cout << hours << ":" << minutes << ":" << "0" << seconds << endl;
            else
                cout << hours << ":" << minutes << ":" << seconds << endl;
}