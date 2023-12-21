#include "RPN.hpp"

int     sum(std::stack<int> & rpn_stack)
{
    int sum = 0;
    while(rpn_stack.size() > 0)
    {
        sum += rpn_stack.top();
        rpn_stack.pop();
    }
    return (sum);
}

int     sub(std::stack<int> & rpn_stack)
{
    int sub = 0;
    if (!rpn_stack.size())
        throw (std::logic_error("empty stack !!!"));
    sub = rpn_stack.top();
    rpn_stack.pop();
    while(rpn_stack.size() > 0)
    {
        sub -= rpn_stack.top();
        rpn_stack.pop();
    }

    return (-sub);
}

int multi(std::stack<int> & rpn_stack)
{
    int mul = 1;

     while(rpn_stack.size() > 0)
    {
        mul *= rpn_stack.top();
        rpn_stack.pop();
    }
    return (mul);
}

int div(std::stack<int> & rpn_stack)
{
    int div = 1;

    if (!rpn_stack.size())
        throw (std::logic_error("empty stack !!!"));
    div = rpn_stack.top();
    rpn_stack.pop();
     while(rpn_stack.size() > 0)
    {
        if (!rpn_stack.top())
            throw (std::logic_error("Error : div by 0 !!!"));
        div /= rpn_stack.top();
        rpn_stack.pop();
    }
    return (div);
}

int     rpn_calculator(std::string input)
{
    std::stack<int> rpn_stack;
    std::string::iterator it;

    if (input.find_first_not_of(" +-/*0123456789") != input.npos)
        throw (std::logic_error("invalid input !!!"));
    for(it = input.begin(); it < input.end(); it++)
    {
        if (isdigit(*it))
            rpn_stack.push((int)*it - 48);
        else if (strchr("+-", *it) && isdigit(*(it + 1)))
            {
                if (*it == '-')
                    rpn_stack.push((*(it + 1) - 48) * -1);
                else
                    rpn_stack.push(*(it + 1) - 48);
                it++;
            }
        else if (strchr("+*-/", *it))
        {
            switch(*it)
            {
                case '+':
                    rpn_stack.push(sum(rpn_stack));
                    break;
                case '-':
                    rpn_stack.push(sub(rpn_stack));
                    break;
                case '*':
                    rpn_stack.push(multi(rpn_stack));
                    break;
                case '/':
                    rpn_stack.push(div(rpn_stack));
            }
        }
    }
    return (rpn_stack.top());
}