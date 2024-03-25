#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: Minimo dos argumentos" << std::endl;
        return (1);
    }
    RPN rpn(av[1]);
    rpn.calculate();
    return (0)
}
