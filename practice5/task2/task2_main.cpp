#include <iostream>
#include "volume.h"

int main()
{
    std::cout << calculateVolume(3, 4) << std::endl; // output 12
    std::cout << calculateVolume(3, 4, 5) << std::endl; // output 60
}