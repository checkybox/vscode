#include <iostream>

int expression(double x, double y)
{
    double expression = ((x - 2*y) * x) / (-2*y);
    std::cout << expression << std::endl;
    return 0;
}

int main()
{
    double x, y {};
    std::cin >> x >> y;
    expression(x, y);

    return 0;
}