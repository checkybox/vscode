#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, z {};
    cin >> x >> y >> z;

    cout << "Min value: " << min(min(x, y), z) << endl;
    cout << "Max value: " << max(max(x, y), z) << endl;

    return 0;
}