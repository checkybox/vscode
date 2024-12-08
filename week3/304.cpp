#include <iostream>

using namespace std;

int main()
{
    double x, y, z {};
    cin >> x >> y >> z;

    cout << min(min(x, y), z) << " " << max(max(x, y), z) << endl;

    return 0;
}