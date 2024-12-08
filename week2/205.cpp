#include <iostream>

int main()
{
    int num1, num2 {};
    std::cin >> num1 >> num2;
    if(num1 > num2 && num1 % num2 == 0)
    {
        std::cout << "yes" << std::endl;
    }
    else
    {
        std::cout << "no" << std::endl;
    }

    return 0;
}