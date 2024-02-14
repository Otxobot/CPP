
// C++ program to demonstate the use of try,catch and throw
// in exception handling.
 
#include <iostream>
 
int main()
{
    int x = 1;
 
    // Some code
    std::cout << "Before try \n";
 
    // try block
    try {
       std::cout << "Inside try \n";
        if (x < 0) {
            // throwing an exception
            throw x;
            std::cout << "After throw (Never executed) \n";
        }
    }

    // catch block
    catch (int x) {
        std::cout << "Exception Caught \n";
    }
 
    std::cout << "After catch (Will be executed) \n";
    return 0;
}