#include <iostream>

using namespace std;

int main()
{
    double temperature {};
    cin >> temperature;
    
    if(temperature < 0)
    {
        cout << "Freezing temperature" << endl;
    }
    else
    {
        if(temperature >= 0 && temperature <= 15)
        {
            cout << "Cold weather" << endl;
            if(temperature == 0)
            {
                cout << "Water freezes at this point." << endl;
            }
        }
        if(temperature >= 16 && temperature <= 25)
        {
            cout << "Moderate weather" << endl;
        }
        if(temperature >= 26 && temperature <= 35)
        {
            cout << "Warm weather" << endl;
        }
        if(temperature > 35)
        {
            cout << "Hot weather" << endl;
        }
    }
    
    return 0;
}