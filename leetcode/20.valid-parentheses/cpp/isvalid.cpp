#include <string>
#include <stack>

class Solution
{
public:
    bool isValid(std::string s)
    {
        std::stack<char> stack;

        for (const auto c : s)
        {
            if (!stack.empty() && isMatched(stack.top(), c))
                stack.pop();
            else
                stack.push(c);
        }

        return stack.empty();
    }

private:
    bool isMatched(char c1, char c2)
    {
        if (c1 == '(' && c2 == ')')
            return true;
        if (c1 == '[' && c2 == ']')
            return true;
        if (c1 == '{' && c2 == '}')
            return true;

        return false;
    }
};
