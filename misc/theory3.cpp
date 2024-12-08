#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5, y = 10;
    swap(x, y);

    int *ptr_x = &x;
    cout << ptr_x << endl;
    cout << *ptr_x;
    return 0;
}