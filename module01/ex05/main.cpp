
#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string level;
    std::cout << "Introduce un nivel: \n";
    std::getline(std::cin, level);
    harl.complain(level);
    return 0;
}