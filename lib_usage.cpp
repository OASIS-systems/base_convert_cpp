/**
 *      Example of base conversion (using BaseConvert library in /lib)
 *      @author OASIS systems
 **/
 
#include <iostream>
#include "BaseConvert.h"

int main()
{
    std::cout << convertBase("11111101000", 2, 10) << std::endl;
    std::cout << convertBase("11111101000", 2, 16) << std::endl;
    std::cout << convertBase("7E8", 16, 10) << std::endl;

    return 0;
}
