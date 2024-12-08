#include <iostream>

using namespace std;

void swap2(unsigned int *a, unsigned int *b)
{
    unsigned int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    unsigned int a, b;
    cin >> a >> b;
    unsigned int *pa = &a, *pb = &b;
    swap2(pa, pb);
    cout << a << " " << b;
}