#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>

class RPN
{
    private:
        std::stack<int> _stack;
        std::string input;
    public:
        RPN();
        RPN(std::string input);
        RPN(const RPN &other);
	    RPN &operator=(const RPN &other);
	    ~RPN();

	    void calculate();
};

#endif