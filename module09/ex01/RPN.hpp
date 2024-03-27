#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

#define RED "\033[0;31m"

class RPN
{
    private:
        std::stack<int> _stack;
        std::string input;
    public:
        RPN();
        RPN(std::string input);
        RPN(const RPN &other);
	    RPN &operator=(const RPN &rhs);
	    ~RPN();

	    void calculate();
};

#endif