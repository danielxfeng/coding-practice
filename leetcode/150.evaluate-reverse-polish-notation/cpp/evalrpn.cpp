#include <string>
#include <vector>
#include <stack>

class Solution
{
public:
    int evalRPN(std::vector<std::string> &tokens)
    {
        std::stack<int> stack;

        for (auto v : tokens)
        {
            if (v != "+" && v != "-" && v != "*" && v != "/")
            {
                stack.push(std::stoi(v));
                continue;
            }

            if (stack.size() < 2)
                return 0;

            auto n2 = stack.top();
            stack.pop();
            auto n1 = stack.top();
            stack.pop();

            int res = 0;

            if (v == "+")
                res = n1 + n2;
            else if (v == "-")
                res = n1 - n2;
            else if (v == "*")
                res = n1 * n2;
            else if (v == "/")
                res = n1 / n2;
            else
                return 0;

            stack.push(res);
        }

        if (stack.size() != 1)
            return 0;

        return stack.top();
    }
};
