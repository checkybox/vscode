#include <iostream>

int main()
{
    double num1, num2 {};
    std::cin >> num1 >> num2;
    if (num1 > num2)
    {
        std::cout << ">" << std::endl;
    }
    else if (num1 < num2)
    {
        std::cout << "<" << std::endl;
    }
    else if (num1 == num2)
    {
        std::cout << "=" << std::endl;  
    }
    
    return 0;
}