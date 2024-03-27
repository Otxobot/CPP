#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Error: At least two arguments" << std::endl;
    }
    PmergeMe mergeinsert;
    mergeinsert.get_input(av);
    mergeinsert.show_deque_before();
    std::cout << std::endl;
    mergeinsert.show_vector_before();

}
