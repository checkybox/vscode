#include <iostream>

double calc_y(double k, double c, double x)
{
    double y = (k*x) + c;
    return(y);
}

int main()
{
    double k, c;
    double x {};
    std::cin >> k >> c;

    x = 0.1;
    std::cout << "x = " << x << " : " << "y = " << calc_y(k, c, x) << std::endl;

    x = 1;
    std::cout << "x = " << x << " : " << "y = " << calc_y(k, c, x) << std::endl;

    x = 5;
    std::cout << "x = " << x << " : " << "y = " << calc_y(k, c, x) << std::endl;

    return 0;
}